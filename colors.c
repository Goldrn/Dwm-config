#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "colors.h"


char* color_array[16] = {"#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000", "#000000"};

char normfgcolor[]                = "#bbbbbb";
char normbgcolor[]                = "#222222";
char normbordercolor[]            = "#444444";
char normfloatcolor[]             = "#db8fd9";

char selfgcolor[]                 = "#eeeeee";
char selbgcolor[]                 = "#005577";
char selbordercolor[]             = "#005577";
char selfloatcolor[]              = "#005577";

char titlenormfgcolor[]           = "#bbbbbb";
char titlenormbgcolor[]           = "#222222";
char titlenormbordercolor[]       = "#444444";
char titlenormfloatcolor[]        = "#db8fd9";

char titleselfgcolor[]            = "#eeeeee";
char titleselbgcolor[]            = "#005577";
char titleselbordercolor[]        = "#005577";
char titleselfloatcolor[]         = "#005577";

char tagsnormfgcolor[]            = "#bbbbbb";
char tagsnormbgcolor[]            = "#222222";
char tagsnormbordercolor[]        = "#444444";
char tagsnormfloatcolor[]         = "#db8fd9";

char tagsselfgcolor[]             = "#eeeeee";
char tagsselbgcolor[]             = "#005577";
char tagsselbordercolor[]         = "#005577";
char tagsselfloatcolor[]          = "#005577";

char hidnormfgcolor[]             = "#005577";
char hidselfgcolor[]              = "#227799";
char hidnormbgcolor[]             = "#222222";
char hidselbgcolor[]              = "#222222";

char urgfgcolor[]                 = "#bbbbbb";
char urgbgcolor[]                 = "#222222";
char urgbordercolor[]             = "#ff0000";
char urgfloatcolor[]              = "#db8fd9";

void read_colors(char* path_to_file, char** color_array_internal) {
	char* line = NULL;
	size_t len = 0;
	ssize_t read;
	color_array_internal = &color_array[0];
	FILE* fptr = fopen(path_to_file, "r");
	if (fptr == NULL) {
		printf("no file");
	}
	else {
		int i = 0;
                while ((read = getline(&line, &len, fptr)) != -1) {
		  *(color_array_internal + i) = malloc(sizeof(char) * 7);
		  strcpy(*(color_array_internal + i), line);
		  i++;
                }
        }

	fclose(fptr);
	
}

int defcolors() {
	read_colors("/home/goldrn/.cache/wal/colors", color_array);
	for (int i = 0; i < 7; i++) {
		normfgcolor[i] = *(color_array[7] + i);
		normbgcolor[i] = *(color_array[0] + i);
		normbordercolor[i] = *(color_array[8] + i);

		titlenormfgcolor[i] = *(color_array[7] + i);
		titlenormbgcolor[i] = *(color_array[0] + i);
		titlenormbordercolor[i] = *(color_array[8] + i);

		selfgcolor[i] = *(color_array[7] + i);
		selbgcolor[i] = *(color_array[1] + i);
		selbordercolor[i] = *(color_array[7] + i);

		titleselfgcolor[i] = *(color_array[7] + i);
		titleselbgcolor[i] = *(color_array[1] + i);
		titleselbordercolor[i] = *(color_array[7] + i);

		tagsnormfgcolor[i] = *(color_array[7] + i);
		tagsnormbgcolor[i] = *(color_array[0] + i);
		tagsnormbordercolor[i] = *(color_array[8] + i);

		tagsselfgcolor[i] = *(color_array[7] + i);
		tagsselbgcolor[i] = *(color_array[1] + i);
		tagsselbordercolor[i] = *(color_array[7] + i);

	//	hidnormfgcolor[i] = *(color_array[9] + i);
	//	hidnormbgcolor[i] = *(color_array[0] + i);
	//	hidselfgcolor[i] = *(color_array[10] + i);
	//	hidselbgcolor[i] = *(color_array[10] + i);

		urgfgcolor[i] = *(color_array[7] + i);
		urgbgcolor[i] = *(color_array[1] + i);
		urgbordercolor[i] = *(color_array[1] + i);
	}
	return 0;
}
