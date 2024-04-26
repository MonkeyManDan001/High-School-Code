import java.util.ArrayList; 

public class StupidComputerPlayer extends OthelloPlayer 
{
    public StupidComputerPlayer(String inName, String inColor)
    {
        super(inName, inColor);
    }

    public Location getMove(ArrayList<Location> valLocs) 
    {
        System.out.println(getName() + " - your turn.");
        System.out.println("validMoves:" + valLocs);

        double rand = Math.random();
        int rand2 = (int) (rand * valLocs.size()); 

        return valLocs.get(rand2);

    }
}
