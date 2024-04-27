
PARTHIB Das <iparthibdas2002@gmail.com>
Apr 19, 2024, 11:51 AM (6 days ago)
to me

#include<stdio.h>
#include<stdlib.h>

int input(int a[],int frame_size){
    printf("\n\n Input \n\n");
    for(int i=1;i<=frame_size;i++){
        printf("Enter  value for frame[%d]:",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("\n\n");
    return 1;
}

int display(int a[],int frame_size){
    printf("\n\nDisplay \n\n");
    for(int i=1;i<=frame_size;i++){
        printf("Frame[%d]:%d)",i,a[i]);
        printf("\n");
    }
    printf("\n\n");
    return 1;
}
int selective_repeat(int frames[],int window_size,int frame_size){
    int nt=0;
   
    int k=0;
    int left[10000]={-1};
    int i;
    for(i=1;i<=frame_size;i++){
        int flag=rand()%2;
        if(flag){
            printf("Frame[%d] with value %d Acknowledge!!! \n\n",i,frames[i]);
            nt++;
        }else{
            printf("Frame[%d] with  value %d Not Acknowledge !! \n\n",i,frames[i]);
            left[k++]=frames[i];
            nt++;
        }
        if(i%window_size==0){
            for(int x=0;x<k;x++){
                printf("Frame[%d] with value %d Retersmitted \n\n",x,left[x]);
                nt++;
                printf("Frame[%d] with  value %d Acknowledged on second Attemp \n\n",x,left[x]);
                k=0;
            }
        }
    }
    for(i=0;i<k;i++){
        printf("Frame[%d] with value %d Reternsmitted \n\n",i,left[i]);
        nt++;
        printf("Frame[%d] with  value %d Acknowledged on second Attemp \n\n",i,left[i]);
             
    }
    printf("Total Transmissions:%d\n\n",nt);
    return 0;
}



int main(){
    int frames[50];
    int windows_size;
    int frame_size;
    printf("\n\nSelective Repeat \n\n");
    printf("Enter Window Size :" );
    scanf("%d",&windows_size);
    printf("Enter Number of Frames TO BE Transmitted :");
    scanf("%d",&frame_size);
    input(frames,frame_size);
    display(frames,frame_size);
    selective_repeat(frames,windows_size,frame_size);
    return 0;
}