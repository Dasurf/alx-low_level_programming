#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *                to the POSIX standard output.
 *
 * @filename: file to read
 * @letters: the number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it can
 *         read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t rdCheck, wordCount;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rdCheck = read(file, buffer, letters);
	if (rdCheck == -1)
		return (0);

	wordCount = write(STDOUT_FILENO, buffer, rdCheck);
	if (wordCount == -1 || rdCheck != wordCount)
		return (0);

	free(buffer);

	close(file);

	return (wordCount);
}
