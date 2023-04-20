//Use ITK Library
Created by; Bangash Software Engineer, CAS SIAT

#include "itkImage.h"
#include "itkImageFileReader.h"
typedef itk::Image<float, 3> ImageType;
typedef itk::ImageFileReader<ImageType> ReaderType;

//Read the image: Use the itk::ImageFileReader class to read the image file. Here's an example code to read a 3D image:
ReaderType::Pointer reader = ReaderType::New();
reader->SetFileName("path/to/image");
reader->Update();

//Extract the 'Dimension-Spacing-and-Origin': Use the GetSpacing(), GetOrigin(), and GetLargestPossibleRegion() methods of the itk::Image class to extract the
//'Dimension-Spacing-and-Origin'. 
//Here's an example code to extract the 'Dimension-Spacing-and-Origin' of the image:

ImageType::Pointer image = reader->GetOutput();
ImageType::SpacingType spacing = image->GetSpacing();
ImageType::PointType origin = image->GetOrigin();
ImageType::RegionType region = image->GetLargestPossibleRegion();

std::cout << "Dimension: " << image->GetImageDimension() << std::endl;
std::cout << "Spacing: " << spacing << std::endl;
std::cout << "Origin: " << origin << std::endl;
std::cout << "Size: " << region.GetSize() << std::endl;
