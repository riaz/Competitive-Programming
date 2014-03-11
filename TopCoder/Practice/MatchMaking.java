import java.util.*;

public class MatchMaking{
	public static int matchScore(String ans1, String ans2){
		int matchCount=0;
		for(int i=0;i<ans1.length();i++ ){ //Both, ans1 and ans2 have same lengths
			if(ans1.charAt(i) == ans2.charAt(i)) matchCount++;
		}
		return matchCount;
	}

	public static void lexSort(String[] names,String[] answersWomen){
		String temp,ans;
		for(int i=0;i<names.length-1;i++)
		{
			for(int j=i+1;j<names.length;j++){
				if(names[i].compareTo(names[j])>0){
					temp = names[i];
					names[i] = names[j];
					names[j] = temp;
					ans = answersWomen[i];
					answersWomen[i] = answersWomen[j];
					answersWomen[j] = ans;					
				}
			}	
		}
	}
	public static String MatchMaking(String[] namesWomen,String[] answersWomen,String[] namesMen,String[] answersMen,String queryWomen){

		//Sorting Women and their answers		
		lexSort(namesWomen,answersWomen);

		//Sorting Men and their answers
		lexSort(namesMen,answersMen);		
		
		int max = 0;
		int matchMan = 0;
		int matchWomen = 0;
		for(int i=0;i<namesWomen.length;i++){
				matchWomen = 0;
				matchMan = 0;
				max = 0;
				for(int j=0;j<namesMen.length;j++){
					if(answersWomen[i] == "" || answersMen[j]=="") continue;
					if(matchScore(answersWomen[i],answersMen[j])>max){
						max = matchScore(answersWomen[i],answersMen[j]);
						matchWomen = i;
						matchMan = j;						
					}
				}
				if(namesWomen[matchWomen].equals(queryWomen))
					return namesMen[matchMan];
				else{
					namesWomen[matchWomen] = "";
					answersWomen[matchWomen] = "";
					namesMen[matchMan] = "";
					answersMen[matchMan] = "";				
				}
		}
		return new String("NULL"); //Program should never reach this statement
	}

	public static void main(String[] args){

	//Test Case 0
	// String[] a = {"Constance", "Bertha", "Alice"};
	// String[] b = {"aaba", "baab", "aaaa"};
	// String[] c = {"Chip", "Biff", "Abe"};
	// String[] d = {"bbaa", "baaa", "aaab"};
	// String e   = "Bertha";

	//Test Case 1	
	// String[] a = {"Constance", "Bertha", "Alice"};
	// String[] b = {"aaba", "baab", "aaaa"};
	// String[] c = {"Chip", "Biff", "Abe"};
	// String[] d = {"bbaa", "baaa", "aaab"};
	// String e   = "Constance";

	//Test Case 2
	// String[] a = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
	// String[] b = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
	// String[] c = {"Ed", "Duff", "Chip", "Abe", "Biff"};
	// String[] d = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
	// String e   = "Constance";	
	
	//Test Case 3
	// String[] a = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
	// String[] b = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
	// String[] c = {"Ed", "Duff", "Chip", "Abe", "Biff"};
	// String[] d = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
	// String e   = "Delilah";

	//Test Case 4	
	// String[] a = {"Constance", "Alice", "Bertha", "Delilah", "Emily"};
	// String[] b = {"baabaa", "ababab", "aaabbb", "bababa", "baabba"};
	// String[] c = {"Ed", "Duff", "Chip", "Abe", "Biff"};
	// String[] d = {"aabaab", "babbab", "bbbaaa", "abbbba", "abaaba"};
	// String e   = "Emily";	

	//Test Case 5
	// String[] a= {"anne", "Zoe"};
	// String[] b = {"a", "a"};
	// String[] c = {"bob", "chuck"};
	// String[] d = {"a", "a"};
	// String e   = "Zoe";	

	//Test Case 6
	String[] a =	{"F", "M", "S", "h", "q", "g", "r", "N", "U", "x", "H", "P",
	 "o", "E", "R", "z", "L", "m", "e", "u", "K", "A", "w", "Q",
	 "O", "v", "j", "a", "t", "p", "C", "G", "k", "c", "V", "B",
	 "D", "s", "n", "i", "f", "T", "I", "l", "d", "J", "y", "b"};
	String[] b = {"abaabbbb", "bbaabbbb", "aaabaaab", "aabbaaaa", "baabbaab",
	 "aaababba", "bbabbbbb", "bbbabbba", "aaabbbba", "aabbbaaa",
	 "abbabaaa", "babbabbb", "aaaaabba", "aaaabbaa", "abbbabaa",
	 "babababa", "abbaaaaa", "bbababba", "baaaaaba", "baaaaabb",
	 "bbbbabba", "ababbaaa", "abbbabab", "baabbbaa", "bbbaabbb",
	 "aababbab", "ababbabb", "abbaabba", "baabbabb", "aaabaaab",
	 "aabbbaba", "aabaaabb", "abababba", "aabbaaaa", "aabbabaa",
	 "bababaaa", "aabaaaab", "bbbbaabb", "baaababb", "abaabbab",
	 "aabbbaaa", "baabbaba", "bbabbbaa", "aabbbbaa", "abbbaaab",
	 "abababbb", "ababaaba", "bababaaa"};
	String[] c = {"f", "C", "v", "g", "Q", "z", "n", "c", "B", "o", "M", "F",
	 "u", "x", "I", "T", "K", "L", "E", "U", "w", "A", "d", "t",
	 "e", "R", "D", "s", "p", "q", "m", "r", "H", "j", "J", "V",
	 "l", "a", "k", "h", "G", "y", "i", "P", "O", "N", "b", "S"};
	String[] d ={"bbbaabab", "bbabaabb", "ababbbbb", "bbbababb", "baababaa",
	 "bbaaabab", "abbabbaa", "bbbabbbb", "aabbabab", "abbababa",
	 "aababbbb", "bababaab", "aaababbb", "baabbaba", "abaaaaab",
	 "bbaababa", "babaabab", "abbabbba", "ababbbab", "baabbbab",
	 "babbaaab", "abbbbaba", "bbabbbba", "baaabaab", "ababbabb",
	 "abbbaabb", "bbbbaabb", "bbbaaabb", "baabbaba", "bbabaaab",
	 "aabbbaab", "abbbbabb", "bbaaaaba", "bbbababa", "abbaabba",
	 "bababbbb", "aabaaabb", "babbabab", "baaaabaa", "ababbaba",
	 "aaabaabb", "bbaaabaa", "baaaaabb", "bbaabaab", "bbababab",
	 "aabaaaab", "aaaaabab", "aabbaaba"};
	String e = "U";	

	System.out.println(MatchMaking(a,b,c,d,e));
	}
}
