import java.util.*;


// 描述
//明明生成了
//�
//N个1到500之间的随机整数。请你删去其中重复的数字，即相同的数字只保留一个，把其余相同的数去掉，然后再把这些数从小到大排序，按照排好的顺序输出。
//
//数据范围：
//1
//≤
//�
//≤
//1000
//
//1≤n≤1000  ，输入的数字大小满足
//1
//≤
//�
//�
//�
//≤
//500
//
//1≤val≤500
//输入描述：
//第一行先输入随机整数的个数 N 。 接下来的 N 行每行输入一个整数，代表明明生成的随机数。 具体格式可以参考下面的"示例"。
public class HJ3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 注意 hasNext 和 hasNextLine 的区别
        int totalNumber = -1;
        HashSet set = new HashSet();
        while (in.hasNextInt()) { // 注意 while 处理多个 case
            if (totalNumber == -1) {
                totalNumber = in.nextInt();
            } else {
                set.add(in.nextInt());
            }
        }

        List<Integer> list = new ArrayList(set);
        Collections.sort(list);
        for (int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
    }
}
