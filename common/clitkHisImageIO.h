#ifndef CLITKHISIMAGEIO_H
#define CLITKHISIMAGEIO_H
/**
 ===================================================================
 * @file   clitkHisImageIO.h
 * @author Simon Rit <simon.rit@gmail.com>
 * @date   16 Feb 2010

 * @brief  

 ===================================================================*/

// itk include
#include "itkImageIOBase.h"

namespace clitk {
  
  //====================================================================
  // Class for reading His Image file format
  class HisImageIO: public itk::ImageIOBase
  {
  public: 
	/** Standard class typedefs. */
	typedef HisImageIO              Self;
	typedef itk::ImageIOBase        Superclass;
	typedef itk::SmartPointer<Self> Pointer;	
	typedef signed short int        PixelType;
	
	HisImageIO():Superclass() {;}

	/** Method for creation through the object factory. */
	itkNewMacro(Self);
	
	/** Run-time type information (and related methods). */
	itkTypeMacro(HisImageIO, ImageIOBase);
	
	/*-------- This part of the interface deals with reading data. ------ */
	virtual void ReadImageInformation();
	virtual bool CanReadFile( const char* FileNameToRead );
	virtual void Read(void * buffer);

	/*-------- This part of the interfaces deals with writing data. ----- */
        virtual void WriteImageInformation(bool keepOfStream) { ; }
	virtual void WriteImageInformation() { WriteImageInformation(false); }
	virtual bool CanWriteFile(const char* filename);
	virtual void Write(const void* buffer);
	
  protected:
	int m_HeaderSize;

  }; // end class HisImageIO  
} // end namespace

  // explicit template instantiation
template class itk::CreateObjectFunction<clitk::HisImageIO>;

#endif /* end #define CLITKHISIMAGEIO_H */

