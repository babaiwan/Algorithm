import java.util.*;


public class NC61 {
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型一维数组
     * @param target int整型
     * @return int整型一维数组
     */
    public static int[] twoSum (int[] numbers, int target) {
        // write code here
        int[] result = new int[2];
        Map indexMap = new HashMap();
        for(int i = 0;i<numbers.length;i++){
            indexMap.put(numbers[i],i);
        }

        for(int j = 0;j<numbers.length ; j ++){
            int answer = target - numbers[j];
            if(indexMap.get(answer) != null && (Integer)indexMap.get(answer) != j){
                result[0] = j + 1;
                result[1] = (int)indexMap.get(answer) + 1;

                if(result[0] > result[1]){
                    int temp = result[0];
                    result[0] = result[1];
                    result[1] = temp;
                }
                return result;
            }
        }
        return new int[2];
    }

    public static void main(String args[]){
        int[] arr =  {3,2,4};
        twoSum(arr,6);
    }
}