struct MATHF* createmathf(char *a,int n){
    struct MATHF *temp=(struct MATHF*)malloc(sizeof(struct MATHF));
     switch(n){
     	case 0:{printf("a-------");
        strcpy(temp->a,"<span>&#8730;</span>(");
        strcat(temp->a,a);
        strcat(temp->a,")\n");
        temp->type=n;
        return temp;
     	}
     	case 1:{printf("b-------");
        strcpy(temp->a,"<span>&Sigma;</span>(");
        strcat(temp->a,a);
        strcat(temp->a,")\n");
        temp->type=n;
        return temp;
     	}
     	case 2:{printf("c-------");
        strcpy(temp->a,"<span>&int;</span>(");
        strcat(temp->a,a);
        strcat(temp->a,")\n");
        temp->type=n;
        return temp;
     	}
     	case 3:{
     	strcpy(temp->a,a);
     	return temp;	
     	}
     }
}
struct MATHC* createc(struct MATHC* a,struct MATHF* b){
	struct MATHC *temp=(struct MATHC*)malloc(sizeof(struct MATHC));
    strcpy(temp->a,a->a);
    strcat(temp->a,b->a);
    temp->b=a;
    temp->c=b;
    return temp;
}
struct MATHC* createsingle(struct MATHF* a){
	struct MATHC *temp=(struct MATHC*)malloc(sizeof(struct MATHC));
    strcpy(temp->a,a->a);
    temp->c=a;
    return temp;
}
struct MATH* createmath(struct MATHC* a){
	struct MATH *temp=(struct MATH*)malloc(sizeof(struct MATH));
    strcpy(temp->a,a->a);
    temp->b=a;
    return temp;

}