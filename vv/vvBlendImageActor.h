  /*=========================================================================
  Program:   vv                     http://www.creatis.insa-lyon.fr/rio/vv

  Authors belong to: 
  - University of LYON              http://www.universite-lyon.fr/
  - L�on B�rard cancer center       http://oncora1.lyon.fnclcc.fr
  - CREATIS CNRS laboratory         http://www.creatis.insa-lyon.fr

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the copyright notices for more information.

  It is distributed under dual licence

  - BSD        See included LICENSE.txt file
  - CeCILL-B   http://www.cecill.info/licences/Licence_CeCILL-B_V1-en.html
  ======================================================================-====*/

#ifndef VVBLENDIMAGEACTOR_H
#define VVBLENDIMAGEACTOR_H

#include <vtkActor.h>
#include <vtkSmartPointer.h>
#include <vtkOpenGLImageActor.h>

class vvBlendImageActor : public vtkOpenGLImageActor
{
public:
  static vvBlendImageActor *New();
  vtkTypeMacro(vvBlendImageActor, vtkOpenGLImageActor);
  virtual void PrintSelf(ostream& os, vtkIndent indent);

  // Description:
  // Implement base class method.
  void Render(vtkRenderer *ren);  

protected:
  vvBlendImageActor();
  ~vvBlendImageActor();

private:
  vvBlendImageActor(const vvBlendImageActor&);  // Not implemented.
  void operator=(const vvBlendImageActor&);  // Not implemented.
};

#endif
