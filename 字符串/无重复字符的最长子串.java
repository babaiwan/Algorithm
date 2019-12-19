import java.util.HashSet;
public class Solution {
	public static void main(String []args) {
	String s="abcabcbb";
	System.out.println(lengthOfLongestSubstring(s));
		
	}
//	    public int lengthOfLongestSubstring(String s) {
//	 	int max=0;int temp=0;
//	 	if(s.length()==0)
//	         return 0;
//	     if(s.length()==1)
//	         return 1;
//	 	for(int i=0;i<s.length();i++)
//	 		for(int j=i+1;j<s.length();j++)
//	 				{	
//	 					if(temp==hasContent(i,j,s))
//	 						break;
//	 					else
//	 						temp=hasContent(i,j,s);
//	 					if (max<temp)
//	 						max=temp;
//	 				}
//	 	return max;
//	 	    }
		 
	//   945/946  TLE了，数据太大了。。。。	 
//	 	public static int hasContent(int start,int end,String s) {
//	 		HashSet hs=new HashSet();
//	 		int sum = 0;
//	 		for(int i=start;i<=end;i++)
//	 		{
//	 			if(hs.contains(s.charAt(i)))
//	 				break;
//	 			hs.add(s.charAt(i));
//	 			sum++;
//	 		}
//	 		return sum;
//	 	 }



	  public static int lengthOfLongestSubstring(String s) {
		  HashSet hs=new HashSet();
		  int i=0;
		  int j=0;
		  int n=s.length();
		  int ans=0;
		  
		  while(i<n && j<n)
		  	{
			  if(!hs.contains(s.charAt(j)))
			  {   
				  hs.add(s.charAt(j));
			  	  j++; 
			  	  ans=Math.max(ans, j-i);
			  }
			  else
			  	{
				  hs.remove(s.charAt(i));
			  	  i++;
			  	}
		  	}
		  return ans;
		  }
}
//3.无重复字符的最长子串
//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
//
//示例 1:
//
//输入: "abcabcbb"
//输出: 3 
//解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
//示例 2:
//
//输入: "bbbbb"
//输出: 1
//解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
//示例 3:
//
//输入: "pwwkew"
//输出: 3
//解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
//     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。
//https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/
