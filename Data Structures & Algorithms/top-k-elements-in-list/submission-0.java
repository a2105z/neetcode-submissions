class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>(); 
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i]) + 1); 
            } else {
                map.put(nums[i], 1); 
            }
        }

        List<Integer>[] bucket = new ArrayList[nums.length + 1];
        for (int key : map.keySet()) {
            int frequency = map.get(key); 
            if (bucket[frequency] == null) {
                bucket[frequency] = new ArrayList<>(); 
            }
            bucket[frequency].add(key);
        }

        int[] result = new int[k]; 
        int idx = 0; 

        for (int i = bucket.length - 1; i >= 0 && idx < k; i--) {
            if (bucket[i] != null) {
                for (int num : bucket[i]) {
                    result[idx] = num; 
                    idx = idx + 1; 
                    if (idx == k) {
                        break; 
                    }
                }
            }
        }
        return result;   
    }
}