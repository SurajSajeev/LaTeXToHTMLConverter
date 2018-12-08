struct SUBCONTENT* createsubcontent(char *a){
	                    struct SUBCONTENT *temp=(struct SUBCONTENT*)malloc(sizeof(struct SUBCONTENT));
	                    strcpy(temp->a,a);
	                    printf("This is a subcontent\n");
	                    printf("subcontent features\n");
                            	    temp->type=1;
                                    
	                    return temp;
}
struct FEATURES* createfeatures5(struct GRAPHICS * a){
                         struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct FEATURES* createfeatures1(struct OCFEAT * a){
                         struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct FEATURES* createfeature2(struct IBL * a){
                         struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct FEATURES* createfeatures3(struct MATH * a){
                         struct FEATURES *temp=(struct FEATURES*)malloc(sizeof(struct FEATURES));
                         strcpy(temp->a,"");
                         strcat(temp->a,a->a);
                         return temp;
}
struct GRAPHICS* creategraphics(char *s){
	                    struct GRAPHICS *temp=(struct GRAPHICS*)malloc(sizeof(struct GRAPHICS));
	                    strcpy(temp->a,"<img src=\"");
	                    strcat(temp->a,s);
	                    strcat(temp->a,"\">\n");
	                    return temp;

}
struct COMMENT* createcomment(char *s){
	                      struct COMMENT *temp=(struct COMMENT*)malloc(sizeof(struct COMMENT));
	                      char a2[100000];
	                      strcpy(a2,"<!--");
	                      strcat(a2,s);
	                      strcat(a2,"-->\n");
	                      strcpy(temp->a,a2);
	                      return temp;
}
