"""
Created on Mon Apr 17 04:26:04 2023

@author: admin
"""
import vtk

# Create a DICOM reader object
reader = vtk.vtkDICOMImageReader()
reader.SetDirectoryName('Folder/Directory')
reader.Update()

# Get the image data
image_data = reader.GetOutput()

# Get the image dimensions
dims = image_data.GetDimensions()

# Get the image spacing
spacing = image_data.GetSpacing()

# Get the image origin using GetImagePositionPatient
origin = reader.GetImagePositionPatient()

print('Dimensions:', dims)
print('Spacing:', spacing)
print('Origin:', origin)
