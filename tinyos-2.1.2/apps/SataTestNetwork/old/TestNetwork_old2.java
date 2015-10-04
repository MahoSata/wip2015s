import net.tinyos.message.*;
import net.tinyos.util.*;
import net.tinyos.packet.*;
import java.io.PrintStream;
import java.io.*;

public class TestNetwork implements MessageListener{
	private MoteIF mote;
	private String report;
	

// Main entry point
	// void run() {
	// 	mote = new MoteIF(PrintStreamMessenger.err);
	// 	mote.registerListener(new TestNetworkMsg(), this);
	// }

   public TestNetwork(MoteIF mote){
	this.mote = mote;
	this.mote.registerListener(new TestNetworkMsg(), this);
   }

   synchronized public void messageReceived(int dest_addr, Message message) {
		if (message instanceof TestNetworkMsg) {
			TestNetworkMsg msg = (TestNetworkMsg) message;
			if(msg.get_source()!=0){
				System.out.println("Event is happening at node number      =  " + msg.get_source());
				System.out.println("The message sequence for source node   =  " + msg.get_seqno());
				System.out.println("PARENT for the event generating node   =  " + msg.get_parent());
				System.out.println("PARENT for the event generating node   =  " + msg.get_voltage());
				System.out.println("Number of hops to get to the base      =  " + msg.get_hopcount());
				System.out.println(" " );
			// if(msg.get_source()!=0){
        		//         String mes=
        		//             System.currentTimeMillis() + " "
        		//                  + msg.get_source() + " "
        		//                  + msg.get_seqno() + " "
        		//                  + "0" +  " "
        		//                  + msg.get_parent() + " "
        		//                  + msg.get_voltage() + " "
        		//                  + msg.get_hopcount() + " " ;
        		//         }
			}
   		}
    }

    private static void  usage(){
        System.err.println("usage: CollectorMain [-comm <sorce>]");
    }

    public static void main(String[] args){

        String source = null;

        if(args.length ==2){
             if(!args[0].equals("-comm")){
                usage();
                System.exit(1);
             }
             source = args[1];

        }else if(args.length != 0){
            usage();
            System.exit(1);
        }

        PhoenixSource phoenix;

        if(source == null){
            phoenix = BuildSource.makePhoenix(PrintStreamMessenger.err);
        }else{
            phoenix = BuildSource.makePhoenix(source, PrintStreamMessenger.err);
        }
	MoteIF mtf = new MoteIF(phoenix);
	TestNetwork me = new TestNetwork(mtf);

	}
   }
