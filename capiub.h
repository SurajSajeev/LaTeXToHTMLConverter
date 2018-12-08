struct IBL* createIBU(char *a,int n){
  struct IBL *temp=(struct IBL*)malloc(sizeof(struct IBL));
    switch(n){
    case 0:{
            strcpy(temp->a,"<u>");
            strcat(temp->a,a);
            strcat(temp->a,"</u>");
            temp->type=n;
            return temp;
    }
    case 1:{
            strcpy(temp->a,"<i>");
            strcat(temp->a,a);
            strcat(temp->a,"</i>");
            temp->type=n;
            return temp;
    }
    case 2:{strcpy(temp->a,"<b>");
            strcat(temp->a,a);
            strcat(temp->a,"</b>");
            temp->type=n;
            return temp;

    }
    }
}
struct CAPTION * fcaptionc(char *a,int n){

  struct CAPTION *temp=(struct CAPTION*)malloc(sizeof(struct CAPTION));
  char a2[100];
  snprintf(a2,100,"\n<figcaption>Fig %d:",n);
  strcpy(temp->a,a2);
  strcat(temp->a,a);
  strcat(temp->a,"\n</figcaption>");
  return temp;
}
    struct FIGC *ca(struct CAPTION* a){
    struct FIGC *temp=(struct FIGC*)malloc(sizeof(struct FIGC));
    strcpy(temp->a,a->a);
    temp->d=a;
    return temp;
    }

    struct FIGC *gr(struct GRAPHICS* a){
    struct FIGC *temp=(struct FIGC*)malloc(sizeof(struct FIGC));
    strcpy(temp->a,a->a);
    temp->c=a;
    return temp;
    }
    
   
    
    struct FIGC *figcogr(struct FIGC* a,struct GRAPHICS* b){
    struct FIGC *temp=(struct FIGC*)malloc(sizeof(struct FIGC));
    strcpy(temp->a,a->a);
    strcat(temp->a,b->a);
    temp->b=a;
    temp->c=b;
    return temp;
    }
    
    struct FIGC *figcocap(struct FIGC* a,struct CAPTION* b){
    struct FIGC *temp=(struct FIGC*)malloc(sizeof(struct FIGC));
    strcpy(temp->a,a->a);
    strcat(temp->a,b->a);
    temp->b=a;
    temp->d=b;
    return temp;
    }
    
    struct FIGF* convertTofig(struct FIGC* a){
 struct FIGF *temp=(struct FIGF*)malloc(sizeof(struct FIGF));
      strcpy(temp->a,"<center><figure>");
      strcat(temp->a,a->a);
      strcat(temp->a,"</figure></center>");
      return temp;
    }
