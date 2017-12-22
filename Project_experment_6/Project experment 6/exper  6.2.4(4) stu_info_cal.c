//#define max
#ifdef max

#include<stdio.h>
#define N 5
#define M 3

typedef struct class {
	char n_c[20];
	float score;
}pec;
typedef  struct {
	pec clu[M];
} ty_sclu;
//�༶��Ϣ
    ty_sclu sclu;
struct detail{
		pec a_stuff_i[M];
		int lower_than_ave[M];
		int lose_num[M];
		int higher_90[M];
	} detail;
	
typedef struct  {
	char name[21];
	ty_sclu sclu_e;
	float ave;
}student;
    student stu[N];
	
void calculate_average_stu(student * pstu);
void  calculate_average_cla(student * pts, int q);
void number_lower_than_average(student *pts, int q);
void num_h_l(student *pts, int q);

int main()
{
	int i, j;
	student * head_s=stu;//for the search in the whole class
	printf("please enter the name of %d student:\n",N);
	for (i = 0; i < N; ++i) {
		scanf("%s", stu[i].name);
	}//�ڽṹ����stu������ѧ����
	printf("please enter the name of the %d class:\n", M);
	for (i = 0; i < M; ++i) {
		scanf("%s", sclu.clu[i].n_c);
	}//����γ�����ģ��ty_clu���ܿγ���Ϣ��
	for (i = 0; i < M; ++i) {
        detail.a_stuff_i[i] = sclu.clu[i];
	}
	for (i = 0; i > N; ++i) {
		stu[i].sclu_e = sclu;
	}
	for (i = 0; i < N; ++i) {//�ֱ�����N��ѧ����M�ſεĳɼ�
		printf("please enter %s's scores by this scquence:\n",stu[i].name);
		for (j = 0; j < M; ++j) {
			printf("%s\t", sclu.clu[j].n_c);
			if (j == M - 1) printf("\n");
		}
		for (j = 0; j < M; ++j) {
			scanf("%f", &stu[i].sclu_e.clu[j].score);
		}
	}
	for (i = 0; i < N; ++i) {
		calculate_average_stu(stu+i);
	}
	for (j = 0; j < M; ++j) {
		 calculate_average_cla(head_s, j);
		 number_lower_than_average(head_s, j);
		 num_h_l(head_s, j);
	   }
	//���ÿ��ѧ������Ϣ
	for (i = 0; i < N; ++i) {
		printf("%10s,%f\n", stu[i].name, stu[i].ave);
		for (j = 0; j < M; ++j) {
			printf("%s\t%f\n", stu[i].sclu_e.clu[j].n_c, stu[i].sclu_e.clu[j].score);
		}
	}
	//����γ���Ϣ
	for (i = 0; i < M; ++i) {
		printf("\ndetails of %s:\n\naverage grades of this course:%f\n",
			detail.a_stuff_i[i].n_c, detail.a_stuff_i[i].score);
		printf("number of students whose score is lower than average:%d\n", detail.lower_than_ave[i]);
		printf("students who failed this course:%d\n\
			students whose score is higher than 90:%d", detail.lose_num[i], detail.higher_90[i]);
	}
	return 0;
}

void calculate_average_stu(student * pstu)
{
	float sum;
	int i;
	for (i = 0, sum = 0; i < M; ++i) {
		sum += pstu->sclu_e.clu[i].score;
	}
	pstu->ave = sum / M;
}

void  calculate_average_cla(student * pts, int q)//q ��ģ���пγ̵�������
{
	float total=0;
	int i;
	for (i = 0; i < N; ++i) {
		total += (pts+i)->sclu_e.clu[q].score;
	}
	detail.a_stuff_i[q].score = total / N;
}

void number_lower_than_average(student * pts, int q)
{
	int t=0,i;
	for (i = 0; i < N; ++i) {
		if ((pts+i)->sclu_e.clu[q].score < detail.a_stuff_i[q].score)
			t++;
	}
	detail.lower_than_ave[q] = t;
}

void num_h_l(student *pts, int q)
{
	int low=0, high=0, i;
	for (i = 0; i < M; ++i) {
		if ((pts+i)->sclu_e.clu[q].score < 60)
			low++;
		if ((pts+i)->sclu_e.clu[q].score > 90)
			high++;
	}
	detail.lose_num[q] = low;
	detail.higher_90[q] = high;
}

#endif