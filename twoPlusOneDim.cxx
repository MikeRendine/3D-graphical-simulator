#include <vtkSmartPointer.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkPolyData.h>
#include <vtkImageData.h>
#include <vtkCoordinate.h>
#include <vtkButtonWidget.h>
#include <vtkTexturedButtonRepresentation2D.h>
#include <vtkCubeAxesActor.h>
#include <vtkTextProperty.h>
#include <vtkActorCollection.h>
#include <vtkCamera.h>
#include <vtkProperty.h>
#include <vtkActor.h>
#include <vtkNamedColors.h>
#include <vtkColor.h>
#include <vtkCubeSource.h>
#include <vtkTextActor.h>
#include <vtkCallbackCommand.h>
#include <vtkCommand.h>
#include <vtkAppendPolyData.h>
#include <vtkPolyDataConnectivityFilter.h>
#include <vtkSphereSource.h>
#include <vtkTextSource.h>
#include <vtkTextWidget.h>
#include <vtkTextRepresentation.h>
#include <vtkTextMapper.h>


void KeypressCallbackFunction(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction2(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction3(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction4(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction5(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction7(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction8(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunctionText(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);


int state = 0;
int state2 = 0;
int stateText = 0;


std::string key = "";

int main(int, char *[])
{

  vtkSmartPointer<vtkNamedColors> colors =
	  vtkSmartPointer<vtkNamedColors>::New();

  vtkColor3d backgroundColor = colors->GetColor3d("Indigo");
  vtkColor3d actorColor = colors->GetColor3d("Tomato");
  vtkColor3d axis1Color = colors->GetColor3d("Salmon");
  vtkColor3d axis2Color = colors->GetColor3d("PaleGreen");
  vtkColor3d axis3Color = colors->GetColor3d("DodgerBlue");
  vtkColor3d wallColor = colors->GetColor3d("Grey");


 vtkSmartPointer<vtkCubeSource> cube =
	  vtkSmartPointer<vtkCubeSource>::New();
 cube->SetXLength(1);
 cube->SetYLength(0.125);
 cube->SetZLength(0.125);
 cube->SetBounds(-1, 0, -0.5, -0.375, -0.375, -0.25);
 cube->Update();


 vtkSmartPointer<vtkCubeSource> cube1 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube1->SetXLength(0);
 cube1->SetYLength(0);
 cube1->SetZLength(0);
 cube1->SetBounds(0, 0, 0, 0, 0, 0);
 cube1->Update();

 vtkSmartPointer<vtkCubeSource> cube2 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube2->SetXLength(0);
 cube2->SetYLength(0);
 cube2->SetZLength(0);
 cube2->SetBounds(0, 0, 0, 0, 0, 0);
 cube2->Update();

 vtkSmartPointer<vtkCubeSource> cube3 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube3->SetXLength(0);
 cube3->SetYLength(0);
 cube3->SetZLength(0);
 cube3->SetBounds(0, 0, 0, 0, 0, 0);
 cube3->Update();

 vtkSmartPointer<vtkCubeSource> cube4 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube4->SetXLength(0);
 cube4->SetYLength(0);
 cube4->SetZLength(0);
 cube4->SetBounds(0, 0, 0, 0, 0, 0);
 cube4->Update();

 vtkSmartPointer<vtkCubeSource> cube5 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube5->SetXLength(0);
 cube5->SetYLength(0);
 cube5->SetZLength(0);
 cube5->SetBounds(0, 0, 0, 0, 0, 0);
 cube5->Update();


 vtkSmartPointer<vtkCubeSource> cube7 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube7->SetXLength(0);
 cube7->SetYLength(0);
 cube7->SetZLength(0);
 cube7->SetBounds(0, 0, 0, 0, 0, 0);
 cube7->Update();


 vtkSmartPointer<vtkCubeSource> cube8 =
	 vtkSmartPointer<vtkCubeSource>::New();
 cube8->SetXLength(0);
 cube8->SetYLength(0);
 cube8->SetZLength(0);
 cube8->SetBounds(0, 0, 0, 0, 0, 0);
 cube8->Update();

 vtkSmartPointer<vtkCubeSource> wall =
	 vtkSmartPointer<vtkCubeSource>::New();
 wall->SetXLength(0.01);
 wall->SetYLength(1.2);
 wall->SetZLength(1.2);
 wall->SetBounds(-1, -0.99, -1, 0.2, -0.8, 0.4);
 wall->Update();
 

 vtkSmartPointer<vtkCubeSource> wall2 =
	 vtkSmartPointer<vtkCubeSource>::New();
 wall2->SetXLength(0.01);
 wall2->SetYLength(1.2);
 wall2->SetZLength(1.2);
 wall2->SetBounds(0, 0, 0,0,0,0);
 wall2->Update();



 
 


 vtkSmartPointer<vtkPolyDataMapper> mapper =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper->SetInputConnection(cube->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper1 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper1->SetInputConnection(cube1->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper2 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper2->SetInputConnection(cube2->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper3 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper3->SetInputConnection(cube3->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper4 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper4->SetInputConnection(cube4->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper5 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper5->SetInputConnection(cube5->GetOutputPort());


 
 vtkSmartPointer<vtkPolyDataMapper> mapper7 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper7->SetInputConnection(cube7->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> mapper8 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 mapper8->SetInputConnection(cube8->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> wallMapper =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 wallMapper->SetInputConnection(wall->GetOutputPort());

 vtkSmartPointer<vtkPolyDataMapper> wallMapper2 =
	 vtkSmartPointer<vtkPolyDataMapper>::New();
 wallMapper2->SetInputConnection(wall2->GetOutputPort());



 

 vtkSmartPointer<vtkActor> cubeActor =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor->SetMapper(mapper);
 cubeActor->GetProperty()->SetDiffuseColor(actorColor.GetData());


 vtkSmartPointer<vtkActor> cubeActor1 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor1->SetMapper(mapper1);
 cubeActor1->GetProperty()->SetDiffuseColor(actorColor.GetData());

 vtkSmartPointer<vtkActor> cubeActor2 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor2->SetMapper(mapper2);
 cubeActor2->GetProperty()->SetDiffuseColor(actorColor.GetData());

 vtkSmartPointer<vtkActor> cubeActor3 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor3->SetMapper(mapper3);
 cubeActor3->GetProperty()->SetDiffuseColor(actorColor.GetData());

 vtkSmartPointer<vtkActor> cubeActor4 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor4->SetMapper(mapper4);
 cubeActor4->GetProperty()->SetDiffuseColor(actorColor.GetData());

 vtkSmartPointer<vtkActor> cubeActor5 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor5->SetMapper(mapper5);
 cubeActor5->GetProperty()->SetDiffuseColor(actorColor.GetData());


 vtkSmartPointer<vtkActor> cubeActor7 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor7->SetMapper(mapper7);
 cubeActor7->GetProperty()->SetDiffuseColor(actorColor.GetData());


 vtkSmartPointer<vtkActor> cubeActor8 =
	 vtkSmartPointer<vtkActor>::New();
 cubeActor8->SetMapper(mapper8);
 cubeActor8->GetProperty()->SetDiffuseColor(actorColor.GetData());

 vtkSmartPointer<vtkActor> wallActor =
	 vtkSmartPointer<vtkActor>::New();
 wallActor->SetMapper(wallMapper);
 wallActor->GetProperty()->SetDiffuseColor(wallColor.GetData());

 vtkSmartPointer<vtkActor> wallActor2 =
	 vtkSmartPointer<vtkActor>::New();
 wallActor2->SetMapper(wallMapper2);
 wallActor2->GetProperty()->SetDiffuseColor(wallColor.GetData());




 vtkSmartPointer<vtkTextActor> textActor =
	 vtkSmartPointer<vtkTextActor>::New();
 textActor->SetInput("Start");
 textActor->GetTextProperty()->SetColor(0.0, 1.0, 0.0);
 
 

 vtkSmartPointer<vtkTextWidget> textWidget =
	 vtkSmartPointer<vtkTextWidget>::New();
 

 vtkSmartPointer<vtkTextRepresentation> textRepresentation =
	 vtkSmartPointer<vtkTextRepresentation>::New();
 textRepresentation->SetWindowLocation(2);
 textRepresentation->SetHandleSize(1);
 
 textWidget->SetRepresentation(textRepresentation);
 
 

  // A renderer and render window
  vtkSmartPointer<vtkRenderer> renderer =
    vtkSmartPointer<vtkRenderer>::New();

  renderer->AddActor(cubeActor);
  renderer->AddActor(cubeActor1);
  renderer->AddActor(cubeActor2);
  renderer->AddActor(cubeActor3);
  renderer->AddActor(cubeActor4);
  renderer->AddActor(cubeActor5);
  renderer->AddActor(cubeActor7);
  renderer->AddActor(cubeActor8);
  renderer->AddActor(wallActor);
  renderer->AddActor(wallActor2);
  //renderer->AddActor(textactor);
 
  

  vtkSmartPointer<vtkRenderWindow> renderWindow =
    vtkSmartPointer<vtkRenderWindow>::New();
  renderWindow->AddRenderer(renderer);

  vtkSmartPointer<vtkCubeAxesActor> cubeAxesActor =
	  vtkSmartPointer<vtkCubeAxesActor>::New();
  cubeAxesActor->SetUseTextActor3D(1);
  cubeAxesActor->SetCamera(renderer->GetActiveCamera());
  cubeAxesActor->GetTitleTextProperty(0)->SetColor(axis1Color.GetData());
  cubeAxesActor->GetTitleTextProperty(0)->SetFontSize(48);
  cubeAxesActor->GetLabelTextProperty(0)->SetColor(axis1Color.GetData());

  cubeAxesActor->GetTitleTextProperty(1)->SetColor(axis2Color.GetData());
  cubeAxesActor->GetLabelTextProperty(1)->SetColor(axis2Color.GetData());

  cubeAxesActor->GetTitleTextProperty(2)->SetColor(axis3Color.GetData());
  cubeAxesActor->GetLabelTextProperty(2)->SetColor(axis3Color.GetData());

  cubeAxesActor->DrawXGridlinesOn();
  cubeAxesActor->DrawYGridlinesOn();
  cubeAxesActor->DrawZGridlinesOn();
#if VTK_MAJOR_VERSION == 6
  cubeAxesActor->SetGridLineLocation(VTK_GRID_LINES_FURTHEST);
#endif
#if VTK_MAJOR_VERSION > 6
  cubeAxesActor->SetGridLineLocation(
	  cubeAxesActor->VTK_GRID_LINES_FURTHEST);
#endif

  cubeAxesActor->XAxisMinorTickVisibilityOff();
  cubeAxesActor->YAxisMinorTickVisibilityOff();
  cubeAxesActor->ZAxisMinorTickVisibilityOff();


  cubeAxesActor->SetXAxisRange(0, 16);
  cubeAxesActor->SetYAxisRange(0, 16);
  cubeAxesActor->SetZAxisRange(0, 16);
 

  cubeAxesActor->SetFlyModeToStaticEdges();
  renderer->AddActor(cubeAxesActor);
  renderer->GetActiveCamera()->Azimuth(30);
  renderer->GetActiveCamera()->Elevation(30);

  renderer->ResetCamera();
  renderer->SetBackground(backgroundColor.GetData());

  // An interactor
  vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
    vtkSmartPointer<vtkRenderWindowInteractor>::New();
  renderWindowInteractor->SetRenderWindow(renderWindow);



  



 

 

  vtkSmartPointer<vtkCallbackCommand> keypressCallback =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback->SetCallback(KeypressCallbackFunction);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback);
  keypressCallback->SetClientData(cube1);
 
  

  vtkSmartPointer<vtkCallbackCommand> keypressCallback2 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback2->SetCallback(KeypressCallbackFunction2);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback2);
  keypressCallback2->SetClientData(cube2);
 
  vtkSmartPointer<vtkCallbackCommand> keypressCallback3 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback3->SetCallback(KeypressCallbackFunction3);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback3);
  keypressCallback3->SetClientData(cube3);

  vtkSmartPointer<vtkCallbackCommand> keypressCallback4 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback4->SetCallback(KeypressCallbackFunction4);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback4);
  keypressCallback4->SetClientData(cube4);

  vtkSmartPointer<vtkCallbackCommand> keypressCallback5 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback5->SetCallback(KeypressCallbackFunction5);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback5);
  keypressCallback5->SetClientData(cube5);

  vtkSmartPointer<vtkCallbackCommand> keypressCallback7 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback7->SetCallback(KeypressCallbackFunction7);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback7);
  keypressCallback7->SetClientData(cube7);

  vtkSmartPointer<vtkCallbackCommand> keypressCallback8 =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallback8->SetCallback(KeypressCallbackFunction8);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback8);
  keypressCallback8->SetClientData(cube8);

  vtkSmartPointer<vtkCallbackCommand> keypressCallbackText =
	  vtkSmartPointer<vtkCallbackCommand>::New();
  keypressCallbackText->SetCallback(KeypressCallbackFunctionText);
  renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallbackText);
  keypressCallbackText->SetClientData(textActor);

  // Add the actors to the scene
 // renderer->AddActor(textActor);
  renderer->SetBackground(.1, .2, .5);
  renderWindow->SetSize(700, 700);
  renderWindow->Render();

 

  textWidget->SetInteractor(renderWindowInteractor);
  textWidget->SetTextActor(textActor);
  textWidget->SelectableOff();
  textWidget->On();

  // Begin mouse interaction
  renderWindowInteractor->Start();

  return EXIT_SUCCESS;
}

void KeypressCallbackFunction(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube1 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 0) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 1;
		}


		else if (state == 1) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 2;

		}
		else if (state == 2) {


			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0, 0.125, -0.5, -0.375, -0.375, 0.125);

			cube1->Modified();
			cube1->Update();

			state = 3;
		}


	}

	if (key == "Left") {

		if (state == 1) {


			cube1->SetXLength(0.0);
			cube1->SetYLength(0.0);
			cube1->SetZLength(0.0);
			cube1->SetBounds(0,0,0,0,0,0);

			cube1->Modified();
			cube1->Update();

			state = 0;
		}


		else if (state == 2) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 1;

		}
		else if (state == 4) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 2;
		}


	}
}

void KeypressCallbackFunction2(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{

	// Prove that we can access the sphere source

	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();

	vtkCubeSource* cube2 =
		static_cast<vtkCubeSource*>(clientData);

	if (key == "Right") {

		if (state == 3) {

			state = 4;
		}
		else if (state == 4) {

			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube2->Modified();
			cube2->Update();

			state = 5;
		}

		else if (state == 5) {

			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube2->Modified();
			cube2->Update();

			state = 6;
		}
		else if (state == 6) {


			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);

			cube2->Modified();
			cube2->Update();

			state = 7;
		}

		
		else if (state == 10 || state == 100) {

			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

			cube2->Modified();
			cube2->Update();

			state = 11;
		}
		else if (state == 11) {

			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(0, 0.125, -0.5, -0.375, -0.875, -0.375);

			cube2->Modified();
			cube2->Update();
			

			state = 12;
		}
		
	}

	if (key == "Left") {

	 if (state == 10) {
		state = 100;
	}
		else if (state == 5) {

			cube2->SetXLength(0.0);
			cube2->SetYLength(0);
			cube2->SetZLength(0);
			cube2->SetBounds(0,0,0,0,0,0);

			cube2->Modified();
			cube2->Update();

			state = 4;
		}

		else if (state == 6) {

			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);


			cube2->Modified();
			cube2->Update();

			state = 5;
		}
		else if (state == 8) {

			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube2->Modified();
			cube2->Update();

			state = 6;
		}
		else if (state == 11) {

			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);

			cube2->Modified();
			cube2->Update();

			state = 10;
		}
		
		else if (state == 13) {

			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

			cube2->Modified();
			cube2->Update();

			state = 11;
		}
	}
}

void KeypressCallbackFunction3(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{

	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube3 =
		static_cast<vtkCubeSource*>(clientData);

	if (key == "Right") {

		if (state == 7) {

			state = 8;
		}

		else if (state == 8) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube3->Modified();
			cube3->Update();


			state = 9;
		}
		else if (state == 9) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube3->Modified();
			cube3->Update();


			state = 10;
		}

		else if (state == 12) {

			state = 13;
		}
		else if (state == 13) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);


			cube3->Modified();
			cube3->Update();

			state = 14;
		}
		else if (state == 29 || state == 120) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);


			cube3->Modified();
			cube3->Update();

			state = 30;
		}
		else if (state == 30) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-0.375, 0.125, -0.5, -0.375, 0.125, 0.25);


			cube3->Modified();
			cube3->Update();

			state = 31;
		}


	}

	if (key == "Left") {

	     if (state == 29) {
		state = 120;
	}

		else if (state == 9) {

			cube3->SetXLength(0.0);
			cube3->SetYLength(0);
			cube3->SetZLength(0);
			cube3->SetBounds(0, 0, 0, 0, 0, 0);

			cube3->Modified();
			cube3->Update();


			state = 8;
		}

	   
		else if (state == 100) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube3->Modified();
			cube3->Update();

			state = 9;
		}

		else if (state == 15) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube3->Modified();
			cube3->Update();


			state = 13;
		}
		else if (state == 30) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);


			cube3->Modified();
			cube3->Update();

			state = 29;
		}
		

		else if (state == 32) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);


			cube3->Modified();
			cube3->Update();

			state = 30;
		}
	}
}

void KeypressCallbackFunction4(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{
	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();

	// Prove that we can access the sphere source
	vtkCubeSource* cube4 =
		static_cast<vtkCubeSource*>(clientData);

	if (key == "Right") {

		if (state == 14) {

			state = 15;
		}

		else if (state == 15) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube4->Modified();
			cube4->Update();

			state = 16;
		}

		else if (state == 16) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube4->Modified();
			cube4->Update();

			state = 17;
		}

		else if (state == 17) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.5);
			cube4->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			cube4->Modified();
			cube4->Update();

			state = 18;
		}

		else if (state == 21 || state == 69) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(0, 0.5, -0.5, -0.375, -1, -0.875);

			cube4->Modified();
			cube4->Update();

			state = 22;
			state2 = 0;

		}
	}
	if (key == "Left") {

	     if (state == 21) {

		state = 69;
	     }
		else if (state == 16) {

			cube4->SetXLength(0);
			cube4->SetYLength(0);
			cube4->SetZLength(0);
			cube4->SetBounds(0,0,0,0,0,0);

			cube4->Modified();
			cube4->Update();

			state = 15;
		}

		else if (state == 17) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube4->Modified();
			cube4->Update();

			state = 16;
		}

		else if (state == 19) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube4->Modified();
			cube4->Update();

			state = 17;
		}

		else if (state == 23) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.5);
			cube4->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			cube4->Modified();
			cube4->Update();

			state = 21;
			state2 = 1;
		}
	}
}
void KeypressCallbackFunction5(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{

	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube5 =
		static_cast<vtkCubeSource*>(clientData);

	if (key == "Right") {

		if (state == 18) {

			state = 19;
		}

		else if (state == 19) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube5->Modified();
			cube5->Update();

			state = 20;
		}

		else if (state == 20) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.5, -0.0, -0.375, -0.260, -0.375, -0.25);

			cube5->Modified();
			cube5->Update();

			state = 21;
			
		}
		else if (state == 22) {
			state = 23;
		}
		else if (state == 23) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			cube5->Modified();
			cube5->Update();

			state = 24;
		}

		else if (state == 27 || state == 66) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(0.125, 0.625, -0.375, -0.260, -1, -0.875);

			cube5->Modified();
			cube5->Update();

			state = 28;
		}

		else if (state == 28) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(0, 0.5, -0.375, -0.260, -1, -0.875);

			cube5->Modified();
			cube5->Update();

			state = 29;
		}

		else if (state == 35 || state == 667) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(0.5, 0.625, -0.5, -0.375, -1, -0.5);

			cube5->Modified();
			cube5->Update();

			state = 37;
		}

	}if (key == "Left") {

	    if (state == 27) {
		state = 66;
	     }

		if (state == 35) {
			state = 667;
		}

		else if (state == 20) {

			cube5->SetXLength(0);
			cube5->SetYLength(0);
			cube5->SetZLength(0);
			cube5->SetBounds(0, 0, 0, 0, 0, 0);

			cube5->Modified();
			cube5->Update();

			state = 19;
		}
		
		else if (state == 69) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube5->Modified();
			cube5->Update();

			state = 20;
		}

		else if (state == 25) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.5, -0.0, -0.375, -0.260, -0.375, -0.25);

			cube5->Modified();
			cube5->Update();

			state = 23;
		}
		else if(state == 28){


			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			cube5->Modified();
			cube5->Update();

			state = 27;
		}
		
		else if (state == 120) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(0.125, 0.625, -0.375, -0.260, -1, -0.875);

			cube5->Modified();
			cube5->Update();

			state = 28;
		}
		
		else if (state == 38){

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(0, 0.5, -0.375, -0.260, -1, -0.875);

			cube5->Modified();
			cube5->Update();

			state = 35;
		}
	}
}

void KeypressCallbackFunction7(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube7 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 24) {

			state = 25;
		}

		else if (state == 25) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube7->Modified();
			cube7->Update();

			state = 26;
		}

		else if (state == 26) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube7->Modified();
			cube7->Update();

			state = 27;
		}
		else if (state == 31) {

			state = 32;
		}
		else if (state == 32) {


			cube7->SetXLength(0.125);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.5);
			cube7->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);

			cube7->Modified();
			cube7->Update();

			state = 33;
		}

		else if (state == 33) {


			cube7->SetXLength(0.125);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.5);
			cube7->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

			cube7->Modified();
			cube7->Update();

			state = 34;
		}

		else if (state == 34) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.5, 0, -0.375, -0.260, 0.125, 0.25);

			cube7->Modified();
			cube7->Update();

			state = 35;
		}

		else if (state == 37) {

			state = 38;
		}

		else if (state == 38) {

			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.375, 0.125, -0.375, -0.260, 0.125, 0.25);

			cube7->Modified();
			cube7->Update();

			state = 39;
		}
		else if (state == 39) {

			cube7->SetXLength(0.125);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.5);
			cube7->SetBounds(-0.5, -0.375, -0.5, -0.375, -0.25, 0.25);

			cube7->Modified();
			cube7->Update();

			state = 40;
		}

	}
	if (key == "Left") {


		   if (state == 26) {


			cube7->SetXLength(0);
			cube7->SetYLength(0);
			cube7->SetZLength(0);
			cube7->SetBounds(0,0,0,0,0,0);

			cube7->Modified();
			cube7->Update();

			state = 25;
		}
		   
		   else if (state == 66) {


			   cube7->SetXLength(0.5);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.125);
			   cube7->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			   cube7->Modified();
			   cube7->Update();

			   state = 26;
		   }
		   else if (state == 33) {

			   cube7->SetXLength(0.5);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.125);
			   cube7->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			   cube7->Modified();
			   cube7->Update();

			   state = 32;
		   }
		   
		   else if (state == 34) {

			   cube7->SetXLength(0.125);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.5);
			   cube7->SetBounds(0, 0.125, -0.375, -0.260, -0.25, 0.25);

			   cube7->Modified();
			   cube7->Update();

			   state = 33;
		   }
		  

		   else if (state == 667) {

			   cube7->SetXLength(0.125);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.5);
			   cube7->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

			   cube7->Modified();
			   cube7->Update();

			   state = 34;
		   }

		   else if (state == 39) {

			   cube7->SetXLength(0.5);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.125);
			   cube7->SetBounds(-0.5, 0, -0.375, -0.260, 0.125, 0.25);

			   cube7->Modified();
			   cube7->Update();

			   state = 38;
		   }
		   else if (state == 41) {

			   cube7->SetXLength(0.5);
			   cube7->SetYLength(0.125);
			   cube7->SetZLength(0.125);
			   cube7->SetBounds(-0.375, 0.125, -0.375, -0.260, 0.125, 0.25);

			   cube7->Modified();
			   cube7->Update();

			   state = 39;
		   }
	}		
}

void KeypressCallbackFunction8(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube1 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 40) {

			state = 41;
		}

		else if (state == 41) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 42;
		}


		else if (state == 42) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 43;

		}

		else if (state == 43) {



			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 44;

		}

		else if (state == 44) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(0.125, 0.625, -0.375, -0.260, -1, -0.875);

			cube1->Modified();
			cube1->Update();

			state = 45;

		}
		else if (state == 45) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(0, 0.5, -0.375, -0.260, -1, -0.875);

			cube1->Modified();
			cube1->Update();

			state = 46;

		}
		else if (state == 46) {



			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0.5, 0.625, -0.375, -0.260, -0.875, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 47;

		}
		else if (state == 47) {



		cube1->SetXLength(0.125);
		cube1->SetYLength(0.125);
		cube1->SetZLength(0.5);
		cube1->SetBounds(0.5, 0.625, -0.375, -0.260, -1, -0.5);

		cube1->Modified();
		cube1->Update();

		state = 48;

		}
		else if (state == 48) {



		cube1->SetXLength(0.5);
		cube1->SetYLength(0.125);
		cube1->SetZLength(0.125);
		cube1->SetBounds(0.125, 0.625, -0.5, -0.375, -0.5, -0.375);

		cube1->Modified();
		cube1->Update();

		state = 49;

		}

	}
	if (key == "Left") {

		if (state == 42) {


			cube1->SetXLength(0);
			cube1->SetYLength(0);
			cube1->SetZLength(0);
			cube1->SetBounds(0,0,0,0,0,0);

			cube1->Modified();
			cube1->Update();

			state = 41;
		}
		else if (state == 43) {

			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();


				state = 42;
		}

		else if (state == 44) {



			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-0.5, 0, -0.375, -0.260, -0.375, -0.25);

			cube1->Modified();
			cube1->Update();

			state = 43;

		}
		else if (state == 45) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0, 0.125, -0.375, -0.260, -0.875, -0.375);

			state = 44;
		}
		else if (state == 46) {

			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(0.125, 0.625, -0.375, -0.260, -1, -0.875);
			
			state = 45;
		}
		else if (state == 47) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(0, 0.5, -0.375, -0.260, -1, -0.875);

			cube1->Modified();
			cube1->Update();

			state = 46;
		}
		else if (state == 48) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0.5, 0.625, -0.375, -0.260, -0.875, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 47;
		}
		else if (state == 49) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(0.5, 0.625, -0.375, -0.260, -1, -0.5);

			cube1->Modified();
			cube1->Update();

			state = 48;
		}
		}

	}


void KeypressCallbackFunctionText(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	// Prove that we can access the sphere source
	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	vtkSmartPointer<vtkTextActor> textActor =
		static_cast<vtkTextActor*>(clientData);

	if (key == "Right") {

		if (stateText == 0) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 1;
		}

		else if (stateText == 1) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 2;



		}
		else if (stateText == 2) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 3;



		}
		else if (stateText == 3) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 4;

		}
		else if (stateText == 4) {

			textActor->SetInput("walk_forward");
			textActor->Modified();

			stateText = 5;

		}

		else if (stateText == 5) {

			textActor->SetInput("radx");
			textActor->Modified();

			stateText = 6;

		}

		else if (stateText == 6) {

			textActor->SetInput("insert");
			textActor->Modified();

			stateText = 7;

		}
		else if (stateText == 7) {

			textActor->SetInput("walk_forward");
			textActor->Modified();

			stateText = 8;

		}
		else if (stateText == 8) {

			textActor->SetInput("walk_backwards");
			textActor->Modified();

			stateText = 9;

		}
		else if (stateText == 9) {

			textActor->SetInput("swing");
			textActor->Modified();

			stateText = 10;

		}
		else if (stateText == 10) {

			textActor->SetInput("radx");
			textActor->Modified();

			stateText = 11;

		}
		else if (stateText == 11) {

			textActor->SetInput("insert");
			textActor->Modified();

			stateText = 12;

		}
		else if (stateText == 12) {

		textActor->SetInput("walk_forward");
		textActor->Modified();

		stateText = 13;

		}
		else if (stateText == 13) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 14;

		}
		else if (stateText == 14) {

		textActor->SetInput("insert");
		textActor->Modified();

		stateText = 15;

		}
		else if (stateText == 15) {

		textActor->SetInput("walk_forward");
		textActor->Modified();

		stateText = 16;

		}
		else if (stateText == 16) {

		textActor->SetInput("rad2");
		textActor->Modified();

		stateText = 17;

		}
		else if (stateText == 17) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 18;

		}
		else if (stateText == 18) {

		textActor->SetInput("insert");
		textActor->Modified();

		stateText = 19;

		}
		else if (stateText == 19) {

		textActor->SetInput("walk_forward");
		textActor->Modified();

		stateText = 20;

		}
		else if (stateText == 20) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 21;

		}
		else if (stateText == 21) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 22;

		}
		else if (stateText == 22) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 23;

		}
		else if (stateText == 23) {

		textActor->SetInput("rad2");
		textActor->Modified();

		stateText = 24;

		}
		else if (stateText == 24) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 25;

		}
		else if (stateText == 25) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 26;

		}
		else if (stateText == 26) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 27;

		}
		
		else if (stateText == 27) {

		textActor->SetInput("rad2");
		textActor->Modified();

		stateText = 28;

		}
		else if (stateText == 28) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 29;

		}
		else if (stateText == 29) {

		textActor->SetInput("rad2");
		textActor->Modified();

		stateText = 30;

		}
		else if (stateText == 30) {

		textActor->SetInput("insert");
		textActor->Modified();

		stateText = 31;

		}
		else if (stateText == 31) {

		textActor->SetInput("walk_forward");
		textActor->Modified();

		stateText = 32;

		}
		else if (stateText == 32) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 33;

		}
		else if (stateText == 33) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 34;

		}
		else if (stateText == 34) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 35;

		}
		else if (stateText == 35) {

		textActor->SetInput("radx");
		textActor->Modified();

		stateText = 36;

		}
		else if (stateText == 36) {

		textActor->SetInput("walk_backwards");
		textActor->Modified();

		stateText = 37;

		}
		else if (stateText == 37) {

		textActor->SetInput("End");
		textActor->Modified();

		stateText = 38;

		}
	}

	if (key == "Left") {

		if (stateText == 1) {

			textActor->SetInput("Start");
			textActor->Modified();

			stateText = 0;
		}

		else if (stateText == 2) {

			textActor->SetInput("Insert 0c 5c 3c 0ang 6 5");
			textActor->Modified();

			stateText = 1;



		}
		else if (stateText == 3) {

			textActor->SetInput("Walk_forward 0c 5c 4c 5c 4c 7c 0ang");
			textActor->Modified();

			stateText = 2;


		}
		if (stateText == 4) {

			textActor->SetInput("Rad2 4c 5c 8c 5c 8c 0ang 90ang");
			textActor->Modified();

			stateText = 3;
		}

		else if (stateText == 5) {

			textActor->SetInput("Insert 0c 5c 3c 0ang 5 4");
			textActor->Modified();

			stateText = 4;

		}
		else if (stateText == 6) {

			textActor->SetInput("Walk_forward 0c 5c 4c 5c 4c 7c 0ang");
			textActor->Modified();

			stateText = 5;

		}
		else if (stateText == 7) {

			textActor->SetInput("radx 4c 5c 8c 6c 9c 0ang 90ang");
			textActor->Modified();

			stateText = 6;


		}
		else if (stateText == 8) {

			textActor->SetInput("insert 0c 5c 3c 0ang 4 3");
			textActor->Modified();

			stateText = 7;


		}
		else if (stateText == 9) {

			textActor->SetInput("walk_forward 0c 5c 4c 5c 4c 7c 0ang");
			textActor->Modified();

			stateText = 8;
		}
		else if (stateText == 10) {

			textActor->SetInput("walk_backwards 8c 6c 8c 5c 5c 90ang");
			textActor->Modified();

			stateText = 9;
		}
		else if (stateText == 11) {

			textActor->SetInput("swing 8c 5c 8c 4c 1c 90ang 270ang");
			textActor->Modified();

			stateText = 10;
		}
		else if (stateText == 12) {

			textActor->SetInput("radx 4c 5c 8c 6c 9c 0ang 90ang");
			textActor->Modified();

			stateText = 11;
		}
		else if (stateText == 13) {

			textActor->SetInput("insert 0c 5c 3c 0ang 3 2");
			textActor->Modified();

			stateText = 12;
		}
		else if (stateText == 14) {

			textActor->SetInput("walk_forward 0c 5c 4c 5c 4c 7c 0ang");
			textActor->Modified();

			stateText = 13;
		}
		else if (stateText == 15) {

			textActor->SetInput("radx 4c 5c 8c 4c 1c 0ang 270ang");
			textActor->Modified();

			stateText = 14;
		}
		else if (stateText == 16) {

			textActor->SetInput("insert 0c 5c 3c 0ang 2 1");
			textActor->Modified();

			stateText = 15;
		}
		else if (stateText == 17) {

			textActor->SetInput("walk_forward 0c 5c 4c 5c 4c 7c 0ang");
			textActor->Modified();

			stateText = 16;
		}
		else if (stateText == 18) {

		textActor->SetInput("rad2 8c 4c 8c 0c 11c 270ang 0ang");
		textActor->Modified();

		stateText = 17;
		}
		else if (stateText == 19) {

		textActor->SetInput("radx 4c 5c 8c 4c 1c 0ang 270ang");
		textActor->Modified();

		stateText = 18;
		}
		else if (stateText == 20) {

		textActor->SetInput("insert 0c 5c 3c 0ang 1 0");
		textActor->Modified();

		stateText = 19;
		}
		else if (stateText == 21) {

		textActor->SetInput("walk_forward 0c 5c 4c 5c 4c 7c 0ang");
		textActor->Modified();

		stateText = 20;
		}
		else if (stateText == 22) {

		textActor->SetInput("radx 8c 4c 9c 0c 12c 270ang 0ang");
		textActor->Modified();

		stateText = 21;
		}
		else if (stateText == 23) {

		textActor->SetInput("walk_backwards 9c 0c 8c 0c 8c 0ang");
		textActor->Modified();

		stateText = 22;
		}
		else if (stateText == 24) {

		textActor->SetInput("walk_backwards 8c 6c 8c 5c 5c 90ang");
		textActor->Modified();

		stateText = 23;
		}
		else if (stateText == 25) {

		textActor->SetInput("rad2 8c 5c 8c 9c 5c 90ang 180ang");
		textActor->Modified();

		stateText = 24;
		}
		else if (stateText == 26) {

		textActor->SetInput("radx 4c 5c 8c 6c 9c 0ang 90ang");
		textActor->Modified();

		stateText = 25;
		}
		else if (stateText == 27) {

		textActor->SetInput("walk_backwards 8c 6c 8c 5c 5c 90ang");
		textActor->Modified();

		stateText = 26;
		}
		else if (stateText == 28) {

		textActor->SetInput("radx 8c 5c 7c 9c 4c 90ang 180ang");
		textActor->Modified();

		stateText = 27;
		}
		else if (stateText == 29) {

		textActor->SetInput("rad2 8c 0c 12c 0c 3c 0ang 90ang");
		textActor->Modified();

		stateText = 28;
		}
		else if (stateText == 30) {

		textActor->SetInput("walk_backwards 7c 9c 8c 9c 8c 180ang");
		textActor->Modified();

		stateText = 29;
		}
		else if (stateText == 31) {

		textActor->SetInput("rad2 8c 9c 4c 9c 6c 180ang 270ang");
		textActor->Modified();

		stateText = 30;
		}
		else if (stateText == 32) {

		textActor->SetInput("insert 0c 5c 3c 0ang 7 6 (1)");
		textActor->Modified();

		stateText = 31;
		}
		else if (stateText == 33) {

		textActor->SetInput("walk_forward 0c 5c 4c 5c 4c 7c 0ang");
		textActor->Modified();

		stateText = 32;
		}
		else if (stateText == 34) {

		textActor->SetInput("radx 4c 5c 8c 4c 1c 0ang 270ang");
		textActor->Modified();

		stateText = 33;
		}
		else if (stateText == 35) {

		textActor->SetInput("radx 8c 4c 9c 0c 12c 270ang 0ang");
		textActor->Modified();

		stateText = 34;
		}
		else if (stateText == 36) {

		textActor->SetInput("walk_backwards 9c 0c 8c 0c 8c 0ang");
		textActor->Modified();

		stateText = 35;
		}
		else if (stateText == 37) {

		textActor->SetInput("radx 8c 0c 12c 1c 4c 0ang 90ang");
		textActor->Modified();

		stateText = 36;
		}
		else if (stateText == 38) {

		textActor->SetInput("walk_backwards 12c 1c 12c 0c 0c 90ang");
		textActor->Modified();

		stateText = 37;
		}


	}

}

