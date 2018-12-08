struct ltDoc* createTreeRoot(){ struct ltDoc *temp=(struct ltDoc*)malloc(sizeof(struct ltDoc));
						strcpy(temp->a,"");
						printf("This is root");
						return temp;
						}
void addcontenttoRoot(struct ltDoc * root,struct CONTENT *con){
	printf("\n----------Add content to root-------------\n");
	                 root->cont=con;
	                 strcat(root->a,con->a);
	                 printf("\n----------Add content to root-------------\n");
                    }
struct CONTENT* createcontent(struct CONTENT *cc,struct SUBCONTENT *sc){ 
printf("This is content");
	struct CONTENT *temp=(struct CONTENT*)malloc(sizeof(struct CONTENT));
						strcpy(temp->a,"");
						strcat(temp->a,sc->a);
						if(cc!=NULL)
						strcat(temp->a,cc->a);
						printf("This is content\n");
						return temp;

						}
struct CONTENT* createemptycontent(){ struct CONTENT *temp=(struct CONTENT*)malloc(sizeof(struct CONTENT));
						
						strcpy(temp->a,"");
						printf("This is an empty\n");
						return temp;

						}
struct SUBCONTENT* createsubcontent1(struct FEATURES* a){
	                    struct SUBCONTENT *temp=(struct SUBCONTENT*)malloc(sizeof(struct SUBCONTENT));
	                    strcpy(temp->a,a->a);
	                    printf("This is a subcontent\n");
	                    printf("subcontent features\n");
                            	    temp->type=2;
                                    temp->s.c=a;
	                    return temp;
}
struct SUBCONTENT* createsubcontent0(struct COMMENT* a){
	                    struct SUBCONTENT *temp=(struct SUBCONTENT*)malloc(sizeof(struct SUBCONTENT));
	                    strcpy(temp->a,a->a);
	                    printf("This is a subcontent\n");
	                    printf("subcontent comment\n");
                            	    temp->type=0;
                                    temp->s.a=a;
	                    return temp;
}
