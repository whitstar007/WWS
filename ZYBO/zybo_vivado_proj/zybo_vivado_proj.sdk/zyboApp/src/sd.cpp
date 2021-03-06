/*
 * sd.cpp
 *
 *  Created on: 02.04.2016
 *      Author: Sebi
 */
#include "sd.h"
#include "xparameters.h"
#include "xsdps.h"
#include "xil_printf.h"
#include "ff.h"
#include "xil_cache.h"

//Lab7 addition start
static FATFS FS_instance; // File System instance
static FIL file1;		// File instance
FRESULT result;			// FRESULT variable
static char FileName[32] = "RECORDS.csv"; // name of the log
static char *Log_File; // pointer to the log
char Path[] = "0:/";  //  string pointer to the logical drive number
unsigned int BytesWr; // Bytes written
int len=0;			// length of the string
int accum=0;		//  variable holding the EOF
u8 Buffer_logger[256] __attribute__ ((aligned(32))); // Buffer should be word aligned (multiple of 4)
u32 Buffer_size = 256;

void writeBufferToFile()
{

}

int initSDCard()
{

	result = f_mount(&FS_instance, Path, 1);
	if (result != 0) {
		return XST_FAILURE;
	}

	Log_File = (char *)FileName;
	result = f_open(&file1, Log_File, FA_CREATE_ALWAYS | FA_WRITE | FA_READ);
	if (result != 0) {
		return XST_FAILURE;
	}

	f_printf(&file1, "sep=,\nImpedance, Temperature, Humidity\n");

	f_sync(&file1);

	//xil_printf("Succes write sd: %d", bytes);
	return XST_SUCCESS;
}

void addSDData(const char* data)
{
	f_printf(&file1, "%s\n", data);

	f_sync(&file1);
}

