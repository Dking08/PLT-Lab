#include <stdio.h>
int main(){
    int lim;
    printf("Enter the range: ");
    scanf("%d",&lim);
    int mainD[lim],revM[lim], ChFLAG=0,CJ=0;
    for(int i=0;i<lim;i++){
        printf("Enter the %d number: ",i+1);
        scanf("%d",&mainD[i]);
        revM[lim-1-i]=mainD[i];
    }
    for(int i=0;i<lim;i++){
        printf("[%d-->%d]",i,CJ);
        if(ChFLAG==0 || CJ==lim){
            CJ=0;
        }
        for(int j=CJ;j<lim;j++){
            printf("[%d--%d]",i,j);
            if(mainD[i]==revM[j]) {
                printf("[%d<-->%d]",i,j);
                CJ=j+1;
                ChFLAG++;
                if(ChFLAG==2){
                    printf("\n%d-%d-",mainD[i-1],mainD[i]);
                }else if(ChFLAG>2){
                    printf("%d-",mainD[i]);
                }
                break;
            }
            else{ChFLAG=0;}
        }
    }
    return 0;
}


void PalinCheck(int *Main, int *revM, int ChFLAG){

}