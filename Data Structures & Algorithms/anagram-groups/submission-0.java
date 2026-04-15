class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>> mp = new HashMap<>();
        for(String s: strs){
            char[] ch = s.toCharArray();
            Arrays.sort(ch);
            String temp = new String(ch);
            mp.putIfAbsent(temp,new ArrayList<>());
            mp.get(temp).add(s);
        }
        return new ArrayList<>(mp.values());
        
    }
}
