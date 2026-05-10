class Solution {
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        int[] skillRank = new int[26];
        for(int i = 0; i<skill.length(); i++){
            char c = skill.charAt(i);
            skillRank[c-'A'] = i+1;
        }
        
        for(String tree:skill_trees){
            int current = 1;
            boolean isPossible = true;
            for(int i = 0; i<tree.length();i++){
                char c = tree.charAt(i);
                if(skillRank[c-'A']==current){
                    current++;
                }else if (skillRank[c-'A']>current){
                    isPossible = false;
                    break;
                }
            }
            if(isPossible)answer++;
            
            
        }
        return answer;
    }
}