import net.tinyos.message.*;
import net.tinyos.util.*;
import net.tinyos.packet.*;
import net.tinyos.message.MoteIF;
import java.io.PrintStream;
import java.io.*;

public class TestNetwork implements MessageListener
{
    private MoteIF mote;
	private String report;
//    private PrintStream out = null;

//    void run(){
//         //mote = new MoteIF(PrintStreamMessenger.err);
//         this.mote.registerListener(new TestNetworkMsg(), this);
//    }
//

    public TestNetwork(MoteIF mote){
        mote.registerListener(new TestNetworkMsg(), this);
    	//init Mark Parsing
	}

    synchronized public void messageReceived(int dest_addr, Message message)
    {
        if (message instanceof TestNetworkMsg){
            TestNetworkMsg msg = (TestNetworkMsg)message;
            if (msg.get_source() != 0) {
				System.out.print("Node ID:" + msg.get_source());
				System.out.print(" Seq:" + msg.get_seqno());
				System.out.print(" Parent:" + msg.get_parent());
				//System.out.print(" Link:" + msg.get_metric());
				System.out.print(" mVolt:" + msg.get_voltage());
				// System.out.print(" HTS:" + msg.get_hopToSource());
				if (msg.get_passNodeId() == 255) {
					System.out.print(" PNI:X");
				} else {
					System.out.print(" PNI:" + msg.get_passNodeId());
				}
				System.out.println("");
				
			}

        }
    }

    private static void usage(){
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
