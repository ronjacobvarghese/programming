public class tree{
    private int height;


    public tree(){   height=1;  }
    public tree(int x){  height=x;  }
    public int getheight(){ return height;}

    public void currentheight(int n){
        for(int i=1;i<=n;++i){
            if (i%2==0 ) height*=3;
            else height+=2;
        }
    }
}


