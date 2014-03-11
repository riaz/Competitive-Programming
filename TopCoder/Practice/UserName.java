import java.util.*;


public class UserName{
	public static String newMember(String[] existingNames,String newName){
		int number = 0;
		String  name = newName;		
		boolean found = false;
		
		do{
			found = false;
			for(int i=0;i<existingNames.length;i++){
				if(existingNames[i].equals(newName)){
					found = true;
					break;
				}
			}

			if(found){
				number++;
				newName = name + number;
			}

		}while(found);

		return newName;
	}

	/*Driver main function*/
	public static void main(String[] args){
		String[] existingNames = 	{"MasterOfDisaster", "TygerTyger1", "DingBat", "Orpheus", "TygerTyger", "WolfMan", "MrKnowItAll"};
		 System.out.println(newMember(existingNames,"TygerTyger"));
	}
}