/*
 * quickFile.h
 *
 *  Created on: Aug 27, 2014
 *      Author: nek3d
 */

#ifndef QUICKFILE_H_
#define QUICKFILE_H_

#include <stddef.h>

/* This will read and store a newline delimited file as an array of char *'s,
 * with a corresponding array of line lengths. */

struct quick_file_info {
	char *main_buf;
	char ** lines;
	size_t *line_lens; /* store length of each line, because strlen is actually quite slow. */
	size_t num_lines;
	size_t file_len;
};

/* Just pass a file name and a pointer to the above struct into this method */
void quick_file_init(char *filename, struct quick_file_info *qfile);

/* Don't forget to pass the struct back to this method for memory clean-up */
void quick_file_delete(struct quick_file_info *qfile);



#endif /* QUICKFILE_H_ */
