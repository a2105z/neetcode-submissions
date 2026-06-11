class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> frequencyMap = new HashMap<>();

        for (int i = 0; i < strs.length; i++) {
            char[] chars = strs[i].toCharArray();
            Arrays.sort(chars);
            String sorted = new String(chars);

            if(!frequencyMap.containsKey(sorted)) {
                frequencyMap.put(sorted, new ArrayList<>());
            }
            frequencyMap.get(sorted).add(strs[i]);

        }

        return new ArrayList<>(frequencyMap.values());

    }
}
