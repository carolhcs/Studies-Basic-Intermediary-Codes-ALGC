/*
 * This project is maked follow NoobTuts tutorials <https://noobtuts.com/java>!
 */

/**
 *
 * @author CarolHCS
 */
public class Interval {
    long m_start = System.currentTimeMillis();
   
    public long value() {
        return System.currentTimeMillis() - m_start;
    }
   
    public void reset() {
        m_start = System.currentTimeMillis();
    }
}
