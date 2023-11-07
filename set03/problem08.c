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
Polygon p;
p.sides=input_n();
return 0;
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
 int i;
  for(i=0;i<p;i++)
  {
    printf("Enter the coordinates of point %d (x,y)",i);
    scanf("%d",&p.x);
    scanf("%d",&p.y)
    return p;
  }
}