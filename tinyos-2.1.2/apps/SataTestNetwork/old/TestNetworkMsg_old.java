/**
 * This class is automatically generated by mig. DO NOT EDIT THIS FILE.
 * This class implements a Java interface to the 'TestNetworkMsg'
 * message type.
 */

public class TestNetworkMsg extends net.tinyos.message.Message {

    /** The default size of this message type in bytes. */
    public static final int DEFAULT_MESSAGE_SIZE = 9;

    /** The Active Message type associated with this message. */
    public static final int AM_TYPE = 5;

    /** Create a new TestNetworkMsg of size 9. */
    public TestNetworkMsg() {
        super(DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /** Create a new TestNetworkMsg of the given data_length. */
    public TestNetworkMsg(int data_length) {
        super(data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg with the given data_length
     * and base offset.
     */
    public TestNetworkMsg(int data_length, int base_offset) {
        super(data_length, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg using the given byte array
     * as backing store.
     */
    public TestNetworkMsg(byte[] data) {
        super(data);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg using the given byte array
     * as backing store, with the given base offset.
     */
    public TestNetworkMsg(byte[] data, int base_offset) {
        super(data, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg using the given byte array
     * as backing store, with the given base offset and data length.
     */
    public TestNetworkMsg(byte[] data, int base_offset, int data_length) {
        super(data, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg embedded in the given message
     * at the given base offset.
     */
    public TestNetworkMsg(net.tinyos.message.Message msg, int base_offset) {
        super(msg, base_offset, DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new TestNetworkMsg embedded in the given message
     * at the given base offset and length.
     */
    public TestNetworkMsg(net.tinyos.message.Message msg, int base_offset, int data_length) {
        super(msg, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
    /* Return a String representation of this message. Includes the
     * message type name and the non-indexed field values.
     */
    public String toString() {
      String s = "Message <TestNetworkMsg> \n";
      try {
        s += "  [source=0x"+Long.toHexString(get_source())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [seqno=0x"+Long.toHexString(get_seqno())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [parent=0x"+Long.toHexString(get_parent())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [voltage=0x"+Long.toHexString(get_voltage())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [hopcount=0x"+Long.toHexString(get_hopcount())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      return s;
    }

    // Message-type-specific access methods appear below.

    /////////////////////////////////////////////////////////
    // Accessor methods for field: source
    //   Field type: int, unsigned
    //   Offset (bits): 0
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'source' is signed (false).
     */
    public static boolean isSigned_source() {
        return false;
    }

    /**
     * Return whether the field 'source' is an array (false).
     */
    public static boolean isArray_source() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'source'
     */
    public static int offset_source() {
        return (0 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'source'
     */
    public static int offsetBits_source() {
        return 0;
    }

    /**
     * Return the value (as a int) of the field 'source'
     */
    public int get_source() {
        return (int)getUIntBEElement(offsetBits_source(), 16);
    }

    /**
     * Set the value of the field 'source'
     */
    public void set_source(int value) {
        setUIntBEElement(offsetBits_source(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'source'
     */
    public static int size_source() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'source'
     */
    public static int sizeBits_source() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: seqno
    //   Field type: int, unsigned
    //   Offset (bits): 16
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'seqno' is signed (false).
     */
    public static boolean isSigned_seqno() {
        return false;
    }

    /**
     * Return whether the field 'seqno' is an array (false).
     */
    public static boolean isArray_seqno() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'seqno'
     */
    public static int offset_seqno() {
        return (16 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'seqno'
     */
    public static int offsetBits_seqno() {
        return 16;
    }

    /**
     * Return the value (as a int) of the field 'seqno'
     */
    public int get_seqno() {
        return (int)getUIntBEElement(offsetBits_seqno(), 16);
    }

    /**
     * Set the value of the field 'seqno'
     */
    public void set_seqno(int value) {
        setUIntBEElement(offsetBits_seqno(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'seqno'
     */
    public static int size_seqno() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'seqno'
     */
    public static int sizeBits_seqno() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: parent
    //   Field type: int, unsigned
    //   Offset (bits): 32
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'parent' is signed (false).
     */
    public static boolean isSigned_parent() {
        return false;
    }

    /**
     * Return whether the field 'parent' is an array (false).
     */
    public static boolean isArray_parent() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'parent'
     */
    public static int offset_parent() {
        return (32 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'parent'
     */
    public static int offsetBits_parent() {
        return 32;
    }

    /**
     * Return the value (as a int) of the field 'parent'
     */
    public int get_parent() {
        return (int)getUIntBEElement(offsetBits_parent(), 16);
    }

    /**
     * Set the value of the field 'parent'
     */
    public void set_parent(int value) {
        setUIntBEElement(offsetBits_parent(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'parent'
     */
    public static int size_parent() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'parent'
     */
    public static int sizeBits_parent() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: voltage
    //   Field type: int, unsigned
    //   Offset (bits): 48
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'voltage' is signed (false).
     */
    public static boolean isSigned_voltage() {
        return false;
    }

    /**
     * Return whether the field 'voltage' is an array (false).
     */
    public static boolean isArray_voltage() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'voltage'
     */
    public static int offset_voltage() {
        return (48 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'voltage'
     */
    public static int offsetBits_voltage() {
        return 48;
    }

    /**
     * Return the value (as a int) of the field 'voltage'
     */
    public int get_voltage() {
        return (int)getUIntBEElement(offsetBits_voltage(), 16);
    }

    /**
     * Set the value of the field 'voltage'
     */
    public void set_voltage(int value) {
        setUIntBEElement(offsetBits_voltage(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'voltage'
     */
    public static int size_voltage() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'voltage'
     */
    public static int sizeBits_voltage() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: hopcount
    //   Field type: short, unsigned
    //   Offset (bits): 64
    //   Size (bits): 8
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'hopcount' is signed (false).
     */
    public static boolean isSigned_hopcount() {
        return false;
    }

    /**
     * Return whether the field 'hopcount' is an array (false).
     */
    public static boolean isArray_hopcount() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'hopcount'
     */
    public static int offset_hopcount() {
        return (64 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'hopcount'
     */
    public static int offsetBits_hopcount() {
        return 64;
    }

    /**
     * Return the value (as a short) of the field 'hopcount'
     */
    public short get_hopcount() {
        return (short)getUIntBEElement(offsetBits_hopcount(), 8);
    }

    /**
     * Set the value of the field 'hopcount'
     */
    public void set_hopcount(short value) {
        setUIntBEElement(offsetBits_hopcount(), 8, value);
    }

    /**
     * Return the size, in bytes, of the field 'hopcount'
     */
    public static int size_hopcount() {
        return (8 / 8);
    }

    /**
     * Return the size, in bits, of the field 'hopcount'
     */
    public static int sizeBits_hopcount() {
        return 8;
    }

}