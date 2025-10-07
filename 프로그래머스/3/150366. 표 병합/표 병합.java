import java.util.*;
class Solution {
    static class Cell{
        int r,c;
        public Cell(int r, int c){
            this.r = r;
            this.c = c;
            
        }
    }
    List<String> ansList = new ArrayList<>();
    String[][] table = new String[51][51];
    Cell[][] mergeTable = new Cell[51][51];
    
    Cell findParent(int r, int c){
        Cell cell = mergeTable[r][c];
        if(cell.r==r && cell.c==c){
            return cell;
        }
        return mergeTable[r][c] = findParent(mergeTable[r][c].r,mergeTable[r][c].c);
    }
    
    
    void update(int r, int c, String value){
        Cell parent = findParent(r,c);
        table[parent.r][parent.c] = value;
        
    }
    
    void update(String value1, String value2){
        for(int i = 1; i<51;i++){
            for(int j = 1; j<51;j++){
                Cell pointedCell = findParent(i,j);
                if(table[pointedCell.r][pointedCell.c].equals(value1)){
                    table[pointedCell.r][pointedCell.c] = value2;
                }
            }
        }
    }
    
    void merge(int r1, int c1, int r2, int c2){
        Cell parent = findParent(r1,c1);
        Cell littleParent = findParent(r2,c2);
        if(parent.r==littleParent.r&&parent.c==littleParent.c)return;
        if(table[parent.r][parent.c].equals("")){
            table[parent.r][parent.c] = table[littleParent.r][littleParent.c];
        }
        table[littleParent.r][littleParent.c] = "";
        mergeTable[littleParent.r][littleParent.c] = parent;
    }
    
    void unmerge(int r, int c){
        Cell parent = findParent(r,c);
        table[r][c] = table[parent.r][parent.c];
        List<Cell> unmergeCells = new ArrayList<>();
        for(int i = 0; i<51;i++){
            for(int j = 0; j<51;j++){
                if(i==r&&j==c)continue;
                Cell pointedCell = findParent(i,j);
                if(pointedCell.r==parent.r&&pointedCell.c==parent.c){
                    unmergeCells.add(new Cell(i,j));
                }
            }
        }
        for(Cell cell:unmergeCells){
            table[cell.r][cell.c] = "";
            mergeTable[cell.r][cell.c] = cell;
        }
        mergeTable[r][c] = new Cell(r,c);
    }
    
    void print(int r, int c){
        Cell parent = findParent(r,c);
        if(table[parent.r][parent.c].equals("")){
            ansList.add("EMPTY");
        }else{
            ansList.add(table[parent.r][parent.c]);
        }
    }
    
    
    public String[] solution(String[] commands) {
        for(int i = 0; i<51;i++){
            for(int j = 0; j<51;j++){
                mergeTable[i][j] = new Cell(i,j);
                table[i][j] = "";
            }
        }
        for(String cmd:commands){
            String[] split = cmd.split(" ");
            if(split[0].equals("UPDATE")&&split.length==4){
                int r = Integer.parseInt(split[1]);
                int c = Integer.parseInt(split[2]);
                update(r,c,split[3]);
            }else if(split[0].equals("UPDATE")&&split.length==3){
                update(split[1],split[2]);
            }else if(split[0].equals("MERGE")){
                int r1 = Integer.parseInt(split[1]);
                int c1 = Integer.parseInt(split[2]);
                int r2 = Integer.parseInt(split[3]);
                int c2 = Integer.parseInt(split[4]);
                if(r1==r2&&c1==c2)continue;
                merge(r1,c1,r2,c2);
            }else if(split[0].equals("UNMERGE")){
                int r = Integer.parseInt(split[1]);
                int c = Integer.parseInt(split[2]);
                unmerge(r,c);
            }else{
                int r = Integer.parseInt(split[1]);
                int c = Integer.parseInt(split[2]);
                print(r,c);
            }
        }
        
        
        
        String[] answer = new String[ansList.size()];
        for(int i = 0; i<ansList.size();i++){
            answer[i]  = ansList.get(i);
        }
        
        return answer;
    }
}