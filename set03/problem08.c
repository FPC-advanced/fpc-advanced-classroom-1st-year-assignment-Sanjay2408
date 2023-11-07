typedef struct point 
{
 float x,y;
} Point;
typedef struct polygon 
{
 int sides;
 Point p[100];
 float perimeter;
} Polygon;
int input_n();
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);
int main()
{
Polygon sides = input_n();

}
int input_n()
{
 int n;
 printf("Enter the Number of sides in the polygon\n");
 scanf("%d",&n);
 return n;
}
int input_polygon(Polygon *p)
{
    for(i=0;i<n;i++)
}