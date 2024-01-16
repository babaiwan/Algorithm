import java.util.Scanner;

public class HJ5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 注意 hasNext 和 hasNextLine 的区别
        while (in.hasNext()) { // 注意 while 处理多个 case
            String input = in.next();

            Double result = 0d;
            for(int i = 0;i<input.length();i++){
                char number = input.charAt(i);
                String numStr = number + "";
                if(numStr.equals("x")|| numStr.equals("0")){
                    continue;
                }
                Integer num = Integer.parseInt(number+"",16);
                result += num * Math.pow(16d,input.length() - i -1 );
            }

            System.out.println(result.intValue());
        }
    }
}
