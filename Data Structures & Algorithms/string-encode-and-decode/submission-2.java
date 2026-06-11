class Solution {

    public String encode(List<String> strs) {
        String outputString = "";
        for (int i = 0; i < strs.size(); i++) {
            String currString = strs.get(i); 
            outputString = outputString + currString.length() 
                                        + "#" + currString;         
        }
        return outputString; 
    }

    //4#neet4#code4#love3#you
    //0123456
    public List<String> decode(String str) {
        List<String> result = new ArrayList<>();

        int anchor = 0; 

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == '#') {
                int length = Integer.parseInt(str.substring(anchor, i));

                //start = i + 1
                // end = i + 1 + length 
 
                // word starts at i + 1 and ends at i + 1 + length 
                String word = str.substring(i + 1, i + 1 + length); 
                result.add(word); 
                anchor = length + i + 1; 

                i = i + length; 
            }
        }

        return result; 
    }
}
