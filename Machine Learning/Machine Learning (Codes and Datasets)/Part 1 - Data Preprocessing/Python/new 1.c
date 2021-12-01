# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main (void)
{
 struct student
  {
    char initial [21];
    int age;
    float id;
    char grade [3];
  } list[5];

struct student * tag;


    tag = ( struct student * ) malloc (5* sizeof (struct student));//changes

strcpy(tag->initial, "KJ");
tag->age = 21;
tag->id = 1.0;
strcpy (tag->grade, "A");
tag++;

strcpy(tag->initial, "MJ");
tag->age = 55;
tag->id = 1.1;
strcpy (tag->grade, "B");
tag++;

strcpy(tag->initial, "CJ");
tag->age = 67;
tag->id = 1.2;
strcpy (tag->grade, "C");
tag++;

strcpy(tag->initial, "SJ");
tag->age = 24;
tag->id = 1.3;
strcpy (tag->grade, "D");
tag++;

strcpy(tag->initial, "DJ");
tag->age = 27;
tag->id = 1.4;
strcpy (tag->grade, "F");
tag++;

int n;
    tag=tag-5;//changes

for ( n = 0; n < 5; n++ ) {
        printf ( "%s is %d, id is %f, grade is %s\n",
          tag->initial, tag->age, tag->id, tag->grade);
            tag++;//changes
        }

return 0;
}