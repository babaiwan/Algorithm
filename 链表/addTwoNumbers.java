class Solution {
//	  public class ListNode {
//	      long val;
//	      ListNode next;
//	      ListNode(long l) { val = l; }
//	  }


	public static void main(String args[]) {
	ListNode l1=new ListNode(9);
	
	ListNode l2=new ListNode(1);
	l2.next=new ListNode(9);
	l2.next.next=new ListNode(9);
	l2.next.next.next=new ListNode(9);
	l2.next.next.next.next=new ListNode(9);
	l2.next.next.next.next.next=new ListNode(9);
	l2.next.next.next.next.next.next=new ListNode(9);
	l2.next.next.next.next.next.next.next=new ListNode(9);
	l2.next.next.next.next.next.next.next.next=new ListNode(9);
	l2.next.next.next.next.next.next.next.next.next=new ListNode(9);
	
	ListNode pre=addTwoNumbers(l1,l2);
	while(pre!=null)
		{
			System.out.println(pre.val);
			pre=pre.next;
		}
	}
	
	
    public static ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode cur;
        cur=l1;
        long sum,number1,number2,temp;
        number1=0;
        number2=0;
        temp=1;
        
        while(cur!=null)
        {	
            number1= (number1+cur.val*temp);
            cur=cur.next;
            temp=temp*10;
        }
        cur=l2;
        temp=1;
        
        while(cur!=null)
        {
            number2= (number2+cur.val*temp);
            cur=cur.next;
            temp=temp*10;
        }
        sum=number1+number2;

        System.out.println("sum="+sum);
        
        ListNode p=new ListNode( (sum%10));
        ListNode returnp=p;

       while(sum>=10)
       {
            sum=sum/10;
            p.next=new ListNode((sum%10));
            p=p.next;
       }

       return returnp;
    }
}
