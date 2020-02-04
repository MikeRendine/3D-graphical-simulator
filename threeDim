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

void KeypressCallbackFunction9(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction10(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction11(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction12(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction13(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction14(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction15(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction16(
	vtkObject* caller,
	long unsigned int eventId,
	void* clientData,
	void* callData);

void KeypressCallbackFunction17(
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

int main(int, char* [])
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
	cube->SetXLength(0.5);
	cube->SetYLength(0.125);
	cube->SetZLength(0.125);
	cube->SetBounds(-1, -0.5, -0.5, -0.375, -0.5, -0.375);
	cube->Update();


	vtkSmartPointer<vtkCubeSource> cube1 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube1->SetXLength(0.5);
	cube1->SetYLength(0.125);
	cube1->SetZLength(0.125);
	cube1->SetBounds(-1, -0.5, -0.5, -0.375, 0.5, 0.625);
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

	vtkSmartPointer<vtkCubeSource> cube9 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube9->SetXLength(0);
	cube9->SetYLength(0);
	cube9->SetZLength(0);
	cube9->SetBounds(0, 0, 0, 0, 0, 0);
	cube9->Update();

	vtkSmartPointer<vtkCubeSource> cube10 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube10->SetXLength(0);
	cube10->SetYLength(0);
	cube10->SetZLength(0);
	cube10->SetBounds(0, 0, 0, 0, 0, 0);
	cube10->Update();

	vtkSmartPointer<vtkCubeSource> cube11 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube11->SetXLength(0);
	cube11->SetYLength(0);
	cube11->SetZLength(0);
	cube11->SetBounds(0, 0, 0, 0, 0, 0);
	cube11->Update();

	vtkSmartPointer<vtkCubeSource> cube12 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube12->SetXLength(0);
	cube12->SetYLength(0);
	cube12->SetZLength(0);
	cube12->SetBounds(0, 0, 0, 0, 0, 0);
	cube12->Update();

	vtkSmartPointer<vtkCubeSource> cube13 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube13->SetXLength(0);
	cube13->SetYLength(0);
	cube13->SetZLength(0);
	cube13->SetBounds(0, 0, 0, 0, 0, 0);
	cube13->Update();

	vtkSmartPointer<vtkCubeSource> cube14 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube14->SetXLength(0);
	cube14->SetYLength(0);
	cube14->SetZLength(0);
	cube14->SetBounds(0, 0, 0, 0, 0, 0);
	cube14->Update();

	vtkSmartPointer<vtkCubeSource> cube15 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube15->SetXLength(0);
	cube15->SetYLength(0);
	cube15->SetZLength(0);
	cube15->SetBounds(0, 0, 0, 0, 0, 0);
	cube15->Update();

	vtkSmartPointer<vtkCubeSource> cube16 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube16->SetXLength(0);
	cube16->SetYLength(0);
	cube16->SetZLength(0);
	cube16->SetBounds(0, 0, 0, 0, 0, 0);
	cube16->Update();

	vtkSmartPointer<vtkCubeSource> cube17 =
		vtkSmartPointer<vtkCubeSource>::New();
	cube17->SetXLength(0);
	cube17->SetYLength(0);
	cube17->SetZLength(0);
	cube17->SetBounds(0, 0, 0, 0, 0, 0);
	cube17->Update();

	vtkSmartPointer<vtkCubeSource> wall =
		vtkSmartPointer<vtkCubeSource>::New();
	wall->SetXLength(0.01);
	wall->SetYLength(1.2);
	wall->SetZLength(1.6);
	wall->SetBounds(-1, -0.99, -1, 0.2, -0.8, 0.8);
	wall->Update();


	







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
	
	vtkSmartPointer<vtkPolyDataMapper> mapper9 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper9->SetInputConnection(cube9->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper10 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper10->SetInputConnection(cube10->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper11 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper11->SetInputConnection(cube11->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper12 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper12->SetInputConnection(cube12->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper13 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper13->SetInputConnection(cube13->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper14 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper14->SetInputConnection(cube14->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper15 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper15->SetInputConnection(cube15->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper16 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper16->SetInputConnection(cube16->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> mapper17 =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	mapper17->SetInputConnection(cube17->GetOutputPort());

	vtkSmartPointer<vtkPolyDataMapper> wallMapper =
		vtkSmartPointer<vtkPolyDataMapper>::New();
	wallMapper->SetInputConnection(wall->GetOutputPort());







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

	vtkSmartPointer<vtkActor> cubeActor9 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor9->SetMapper(mapper9);
	cubeActor9->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor10 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor10->SetMapper(mapper10);
	cubeActor10->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor11 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor11->SetMapper(mapper11);
	cubeActor11->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor12 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor12->SetMapper(mapper12);
	cubeActor12->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor13 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor13->SetMapper(mapper13);
	cubeActor13->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor14 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor14->SetMapper(mapper14);
	cubeActor14->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor15 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor15->SetMapper(mapper15);
	cubeActor15->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor16 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor16->SetMapper(mapper16);
	cubeActor16->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> cubeActor17 =
		vtkSmartPointer<vtkActor>::New();
	cubeActor17->SetMapper(mapper17);
	cubeActor17->GetProperty()->SetDiffuseColor(actorColor.GetData());

	vtkSmartPointer<vtkActor> wallActor =
		vtkSmartPointer<vtkActor>::New();
	wallActor->SetMapper(wallMapper);
	wallActor->GetProperty()->SetDiffuseColor(wallColor.GetData());

	




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
	renderer->AddActor(cubeActor9);
	renderer->AddActor(cubeActor10);
	renderer->AddActor(cubeActor11);
	renderer->AddActor(cubeActor12);
	renderer->AddActor(cubeActor13);
	renderer->AddActor(cubeActor14);
	renderer->AddActor(cubeActor15);
	renderer->AddActor(cubeActor16);
	renderer->AddActor(cubeActor17);
	renderer->AddActor(wallActor);
	
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

	vtkSmartPointer<vtkCallbackCommand> keypressCallback9 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback9->SetCallback(KeypressCallbackFunction9);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback9);
	keypressCallback9->SetClientData(cube9);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback10 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback10->SetCallback(KeypressCallbackFunction10);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback10);
	keypressCallback10->SetClientData(cube10);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback11 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback11->SetCallback(KeypressCallbackFunction11);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback11);
	keypressCallback11->SetClientData(cube11);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback12 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback12->SetCallback(KeypressCallbackFunction12);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback12);
	keypressCallback12->SetClientData(cube12);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback13 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback13->SetCallback(KeypressCallbackFunction13);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback13);
	keypressCallback13->SetClientData(cube13);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback14 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback14->SetCallback(KeypressCallbackFunction14);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback14);
	keypressCallback14->SetClientData(cube14);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback15 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback15->SetCallback(KeypressCallbackFunction15);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback15);
	keypressCallback15->SetClientData(cube15);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback16 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback16->SetCallback(KeypressCallbackFunction16);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback16);
	keypressCallback16->SetClientData(cube16);

	vtkSmartPointer<vtkCallbackCommand> keypressCallback17 =
		vtkSmartPointer<vtkCallbackCommand>::New();
	keypressCallback17->SetCallback(KeypressCallbackFunction17);
	renderWindowInteractor->AddObserver(vtkCommand::KeyPressEvent, keypressCallback17);
	keypressCallback17->SetClientData(cube17);

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

		if (state == 140 || state == 3018) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 141;
		}

		else if (state == 141) {


			cube1->SetXLength(0.125);
			cube1->SetYLength(0.5);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 142;
		}


	}

	if (key == "Left") {

		if (state == 140) {
			state = 3018;
		}

		else if (state == 141) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.5, -0.375, 0.5, 0.625);

			cube1->Modified();
			cube1->Update();

			state = 140;
		}

		else if (state == 143) {


			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 141;
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

		if (state == 0) {


			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube2->Modified();
			cube2->Update();

			state = 1;
		}


		else if (state == 1) {



			cube2->SetXLength(0.125);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.5);
			cube2->SetBounds(-0.5, -0.375, -0.5, -0.375, -0.5, 0);

			cube2->Modified();
			cube2->Update();

			state = 2;

		}
	}

	if (key == "Left") {

		if (state == 1) {

			cube2->SetXLength(0);
			cube2->SetYLength(0);
			cube2->SetZLength(0);
			cube2->SetBounds(0, 0, 0, 0, 0, 0);

			cube2->Modified();
			cube2->Update();

			state = 0;
		}
		else if (state == 3) {

			cube2->SetXLength(0.5);
			cube2->SetYLength(0.125);
			cube2->SetZLength(0.125);
			cube2->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube2->Modified();
			cube2->Update();

			state = 1;
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

		if (state == 2) {

			state = 3;
		}

		else if (state == 3) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube3->Modified();
			cube3->Update();


			state = 4;
		}
		else if (state == 4) {


			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube3->Modified();
			cube3->Update();

			state = 5;
		}

		else if (state == 5) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube3->Modified();
			cube3->Update();

			state = 6;
		}

		else if (state == 8 || state == 3000) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-0.5, 0, -0.5, -0.375, 0, 0.125);


			cube3->Modified();
			cube3->Update();

			state = 9;
		}
	}

	if (key == "Left") {

		if (state == 8) {
			state = 3000;
		}

		else if (state == 4) {

			cube3->SetXLength(0.0);
			cube3->SetYLength(0);
			cube3->SetZLength(0);
			cube3->SetBounds(0, 0, 0, 0, 0, 0);

			cube3->Modified();
			cube3->Update();


			state = 3;
		}


		else if (state == 5) {

			cube3->SetXLength(0.5);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.125);
			cube3->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube3->Modified();
			cube3->Update();

			state = 4;
		}

		else if (state == 7) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube3->Modified();
			cube3->Update();

			state = 5;
		}

		else if (state == 10) {

			cube3->SetXLength(0.125);
			cube3->SetYLength(0.125);
			cube3->SetZLength(0.5);
			cube3->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube3->Modified();
			cube3->Update();

			state = 8;

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

		if (state == 6) {

			state = 7;
		}

		else if (state == 7) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube4->Modified();
			cube4->Update();


			state = 8;
		}

		else if (state == 9) {

			state = 10; 
		}

		else if (state == 10) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.5);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube4->Modified();
			cube4->Update();

			state = 11;
		}


		else if (state == 13 || state == 3001) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.5);
			cube4->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube4->Modified();
			cube4->Update();

			state = 14;
		}

		else if (state == 14) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.5);
			cube4->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube4->Modified();
			cube4->Update();

			state = 15;
		}

		else if (state == 15) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-0.375, 0.125, -0.375, -0.260, 0, 0.125);

			cube4->Modified();
			cube4->Update();

			state = 16;
		}

		else if (state == 27 || state == 3004) {

			cube4->SetXLength(0.5);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.125);
			cube4->SetBounds(-0.5, 0, -0.375, -0.260, 0, 0.125);

			cube4->Modified();
			cube4->Update();

			state = 28;
		}

		else if (state == 28) {

			cube4->SetXLength(0.125);
			cube4->SetYLength(0.125);
			cube4->SetZLength(0.5);
			cube4->SetBounds(0, 0.125, -0.5, -0.375, -0.375, 0.125);

			cube4->Modified();
			cube4->Update();

			state = 29;
		}
	}
    if (key == "Left") {

		if (state == 13) {
			state = 3001;
		}

		if (state == 27) {
			state = 3004;
		}
	
	 if (state == 3000) {

			cube4->SetXLength(0);
			cube4->SetYLength(0);
			cube4->SetZLength(0);
			cube4->SetBounds(0, 0, 0, 0, 0, 0);

			cube4->Modified();
			cube4->Update();

			state = 7;
		}

	else if (state == 12) {

		 cube4->SetXLength(0.5);
		 cube4->SetYLength(0.125);
		 cube4->SetZLength(0.125);
		 cube4->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

		 cube4->Modified();
		 cube4->Update();

		state = 10;
	}
		

		else if (state == 14) {

		 cube4->SetXLength(0.125);
		 cube4->SetYLength(0.5);
		 cube4->SetZLength(0.125);
		 cube4->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

		 cube4->Modified();
		 cube4->Update();

			state = 13;
		}

		else if (state == 15) {

		 cube4->SetXLength(0.125);
		 cube4->SetYLength(0.125);
		 cube4->SetZLength(0.5);
		 cube4->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

		 cube4->Modified();
		 cube4->Update();

			state = 14;
		
		}

		else if (state == 17) {

		 cube4->SetXLength(0.125);
		 cube4->SetYLength(0.125);
		 cube4->SetZLength(0.5);
		 cube4->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

		 cube4->Modified();
		 cube4->Update();

		 state = 15;

	 }

		else if (state == 28) {

		 cube4->SetXLength(0.5);
		 cube4->SetYLength(0.125);
		 cube4->SetZLength(0.125);
		 cube4->SetBounds(-0.375, 0.125, -0.375, -0.260, 0, 0.125);

		 cube4->Modified();
		 cube4->Update();

		 state = 27;

	 }

		else if (state == 30) {

		 cube4->SetXLength(0.5);
		 cube4->SetYLength(0.125);
		 cube4->SetZLength(0.125);
		 cube4->SetBounds(-0.5, 0, -0.375, -0.260, 0, 0.125);

		 cube4->Modified();
		 cube4->Update();

		 state = 28;

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

		if (state == 11) {

			state = 12;
		}

		else if (state == 12) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube5->Modified();
			cube5->Update();

			state = 13;
		}

		else if (state == 16) {
			state = 17;
		}

		else if (state == 17) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 18;

		}

		else if (state == 18) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.25, 0.25);

			cube5->Modified();
			cube5->Update();

			state = 19;

		}
		else if (state == 23 || state == 3002) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 24;
		}
		
		else if (state == 26 || state == 3003) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube5->Modified();
			cube5->Update();

			state = 27;

		}

		else if (state == 29) {
			state = 30;
		}

		else if (state == 30) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.375, 0.125, -0.375, -0.260, 0, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 31;

		}

		else if (state == 31) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.5, 0, -0.375, -0.260, 0, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 32;

		}

		else if (state == 32) {

		cube5->SetXLength(0.125);
		cube5->SetYLength(0.125);
		cube5->SetZLength(0.5);
		cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.5, 0);

		cube5->Modified();
		cube5->Update();


		state = 33;

		}

		else if (state == 33) {

		cube5->SetXLength(0.125);
		cube5->SetYLength(0.125);
		cube5->SetZLength(0.5);
		cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

		cube5->Modified();
		cube5->Update();


		state = 34;

		}

		else if (state == 34) {

		cube5->SetXLength(0.5);
		cube5->SetYLength(0.125);
		cube5->SetZLength(0.125);
		cube5->SetBounds(-0.375, 0.125, -0.5, -0.375, -0.5, -0.375);

		cube5->Modified();
		cube5->Update();


		state = 35;

		}

	}if (key == "Left") {

		if (state == 23) {
			state = 3002;
		}

		if (state == 26) {
			state = 3003;
		}

		else if (state == 3001) {

			cube5->SetXLength(0);
			cube5->SetYLength(0);
			cube5->SetZLength(0);
			cube5->SetBounds(0, 0, 0, 0, 0, 0);

			cube5->Modified();
			cube5->Update();

			state = 12;
		}

		else if (state == 18) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube5->Modified();
			cube5->Update();

			state = 17;
		}

		else if (state == 20) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 18;
		}
		else if (state == 25) {


			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.25, 0.25);

			cube5->Modified();
			cube5->Update();

			state = 23;
		}

		else if (state == 3004) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 26;
		}

		else if (state == 31) {

			cube5->SetXLength(0.125);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.5);
			cube5->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube5->Modified();
			cube5->Update();

			state = 30;
		}

		else if (state == 32) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.375, 0.125, -0.375, -0.260, 0, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 31;
		}

		else if (state == 33) {

			cube5->SetXLength(0.5);
			cube5->SetYLength(0.125);
			cube5->SetZLength(0.125);
			cube5->SetBounds(-0.5, 0, -0.375, -0.260, 0, 0.125);

			cube5->Modified();
			cube5->Update();

			state = 32;
		}

		else if (state == 34) {

		cube5->SetXLength(0.125);
		cube5->SetYLength(0.125);
		cube5->SetZLength(0.5);
		cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.5, 0);

		cube5->Modified();
		cube5->Update();

		state = 33;
		}

		else if (state == 36) {

		cube5->SetXLength(0.125);
		cube5->SetYLength(0.125);
		cube5->SetZLength(0.5);
		cube5->SetBounds(0, 0.125, -0.375, -0.260, -0.375, 0.125);

		cube5->Modified();
		cube5->Update();


		state = 34;
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

		if (state == 19) {

			state = 20;
		}

		else if (state == 20) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 21;
		}

		else if (state == 21) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 22;
		}

		else if (state == 22) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 23;
		}

		else if (state == 24) {

			state = 25;
		}
		else if (state == 25) {


			cube7->SetXLength(0.125);
			cube7->SetYLength(0.5);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.875, -0.75, -0.375, 0.125, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 26;
		}

		else if (state == 35) {
			state = 36;
		}

		else if (state == 36) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.75, -0.25, -0.375, -0.26, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 37;
		}

		else if (state == 37) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.625, -0.125, -0.375, -0.26, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 38;
		}

		else if (state == 38) {


			cube7->SetXLength(0.125);
			cube7->SetYLength(0.5);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.125, 0, -0.375, 0.125, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 39;
		}

		else if (state == 39) {


		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.625, -0.125, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 40;
		}

		else if (state == 40) {


		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 41;
		}

		else if (state == 43 || state == 3006) {

		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 44;
		}

		

		else if (state == 3005 || state == 46) {

		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(0.125, 0.625, -0.5, -0.375, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 47;

		}

	}
	if (key == "Left") {

		if (state == 43) {
			state = 3006;
		}

		if (state == 46) {
			state = 3005;
		}

		if (state == 21) {


			cube7->SetXLength(0);
			cube7->SetYLength(0);
			cube7->SetZLength(0);
			cube7->SetBounds(0, 0, 0, 0, 0, 0);

			cube7->Modified();
			cube7->Update();

			state = 20;
		}

		else if (state == 22) {


			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 21;
		}

		else if (state == 3002) {

			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 22;
		}

		else if (state == 3003) {

			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 25;
		}


		else if (state == 37) {

			cube7->SetXLength(0.125);
			cube7->SetYLength(0.5);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.875, -0.75, -0.375, 0.125, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 36;
		}

		else if (state == 38) {

			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.75, -0.25, -0.375, -0.26, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();


			state = 37;
		}
		else if (state == 39) {

			cube7->SetXLength(0.5);
			cube7->SetYLength(0.125);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.625, -0.125, -0.375, -0.26, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 38;
		}

		else if (state == 40) {

			cube7->SetXLength(0.125);
			cube7->SetYLength(0.5);
			cube7->SetZLength(0.125);
			cube7->SetBounds(-0.125, 0, -0.375, 0.125, -0.5, -0.375);

			cube7->Modified();
			cube7->Update();

			state = 39;
		}

		else if (state == 42) {

		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.625, -0.125, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 40;
		}

		else if (state == 45) {

		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 43;
		}

		else if (state == 48) {

		cube7->SetXLength(0.5);
		cube7->SetYLength(0.125);
		cube7->SetZLength(0.125);
		cube7->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

		cube7->Modified();
		cube7->Update();

		state = 46;
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

		if (state == 41) {

			state = 42;
		}

		else if (state == 42) {


			 cube1->SetXLength(0.5);
			 cube1->SetYLength(0.125);
			 cube1->SetZLength(0.125);
			 cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			 cube1->Modified();
			 cube1->Update();


			state = 43;

		}

		else if (state == 44) {
			state = 45;

		}

		else if (state == 45) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube1->Modified();
			cube1->Update();

			state = 46;

		}

		else if (state == 47) {

			state = 48;

		}
		else if (state == 48) {



			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube1->Modified();
			cube1->Update();

			state = 49;

		}
		else if (state == 49) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(-0.5, -0.375, -0.5, -0.375, -1, -0.5);

			cube1->Modified();
			cube1->Update();

			state = 50;
		}

	}
	if (key == "Left") {

		if (state == 3006) {

			cube1->SetXLength(0);
			cube1->SetYLength(0);
			cube1->SetZLength(0);
			cube1->SetBounds(0, 0, 0, 0, 0, 0);

			cube1->Modified();
			cube1->Update();

			state = 42;
		}

		if (state == 3005) {

			cube1->SetXLength(0.5);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.125);
			cube1->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube1->Modified();
			cube1->Update();

			state = 45;
		}

		if (state == 49) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube1->Modified();
			cube1->Update();

			state = 48;
		}

		if (state == 51) {

			cube1->SetXLength(0.125);
			cube1->SetYLength(0.125);
			cube1->SetZLength(0.5);
			cube1->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube1->Modified();
			cube1->Update();

			state = 49;
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

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 5;

		}

		else if (stateText == 5) {

			textActor->SetInput("Walk_backward");
			textActor->Modified();

			stateText = 7;

		}

		else if (stateText == 7) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 8;

		}
		else if (stateText == 8) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 10;

		}
	
		else if (stateText == 10) {

			textActor->SetInput("Radx (rd1)");
			textActor->Modified();

			stateText = 12;

		}
		
		else if (stateText == 12) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 13;

		}
		else if (stateText == 13) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 14;

		}
		else if (stateText == 14) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 15;

		}
		else if (stateText == 15) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 17;

		}
		
		else if (stateText == 17) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 18;

		}
		else if (stateText == 18) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 20;

		}
		
		else if (stateText == 20) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 21;

		}
		else if (stateText == 21) {

			textActor->SetInput("Walk_forwards");
			textActor->Modified();

			stateText = 22;

		}
		else if (stateText == 22) {

			textActor->SetInput("Walk_forwards");
			textActor->Modified();

			stateText = 23;

		}
		else if (stateText == 23) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 25;

		}
		else if (stateText == 25) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 26;

		}
		else if (stateText == 26) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 27;

		}

		else if (stateText == 27) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 28;

		}
		else if (stateText == 28) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 30;

		}
		
		else if (stateText == 30) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 31;

		}
		else if (stateText == 31) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 32;

		}
		else if (stateText == 32) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 33;

		}
		else if (stateText == 33) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 34;

		}
		else if (stateText == 34) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 36;

		}
		
		else if (stateText == 36) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 37;

		}
		else if (stateText == 37) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 38;

		}
		else if (stateText == 38) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 39;

		}
		else if (stateText == 39) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 40;

		}
		else if (stateText == 40) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 42;

		}
		
		else if (stateText == 42) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 43;

		}
		else if (stateText == 43) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 45;

		}
		
		else if (stateText == 45) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 46;

		}
		else if (stateText == 46) {

		textActor->SetInput("Swing");
		textActor->Modified();

		stateText = 48;

		}
		else if (stateText == 48) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 49;

		}
		else if (stateText == 49) {

		textActor->SetInput("Swing");
		textActor->Modified();

		stateText = 51;

		}
		else if (stateText == 51) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 52;

		}
		else if (stateText == 52) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 53;

		}
		else if (stateText == 53) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 54;

		}
		else if (stateText == 54) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 56;

		}
		else if (stateText == 56) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 57;

		}
		else if (stateText == 57) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 58;

		}
		else if (stateText == 58) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 60;

		}
		else if (stateText == 60) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 61;

		}
		else if (stateText == 61) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 62;

		}
		else if (stateText == 62) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 63;

		}
		else if (stateText == 63) {

		textActor->SetInput("Swing");
		textActor->Modified();

		stateText = 65;

		}
		else if (stateText == 65) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 66;

		}
		else if (stateText == 66) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 67;

		}
		else if (stateText == 67) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 68;

		}
		else if (stateText == 68) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 70;

		}
		else if (stateText == 70) {

		textActor->SetInput("Walk_forward");
		textActor->Modified();

		stateText = 71;

		}
		else if (stateText == 71) {

		textActor->SetInput("Walk_forward");
		textActor->Modified();

		stateText = 72;

		}
		else if (stateText == 72) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 73;

		}
		else if (stateText == 73) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 74;
		}
		else if (stateText == 74) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 76;
		}
		else if (stateText == 76) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 77;
		}
		else if (stateText == 77) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 78;
		}
		else if (stateText == 78) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 79;
		}
		
		else if (stateText == 79) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 81;

		}
		else if (stateText == 81) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 82;

		}
		else if (stateText == 82) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 83;

		}
		else if (stateText == 83) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 84;

		}
		else if (stateText == 84) {

		textActor->SetInput("Swing");
		textActor->Modified();

		stateText = 86;

		}
		else if (stateText == 86) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 87;

		}
		else if (stateText == 87) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 88;

		}
		else if (stateText == 88) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 89;

		}
		else if (stateText == 89) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 91;

		}
		else if (stateText == 91) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 92;

		}
		else if (stateText == 92) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 94;

		}
		else if (stateText == 94) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 95;

		}
		else if (stateText == 95) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 97;

		}
		else if (stateText == 97) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 98;

		}
		else if (stateText == 98) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 99;

		}
		else if (stateText == 99) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 101;

		}
		else if (stateText == 101) {

		textActor->SetInput("Walk_forward");
		textActor->Modified();

		stateText = 102;

		}
		else if (stateText == 102) {

		textActor->SetInput("Walk_forward");
		textActor->Modified();

		stateText = 103;

		}
		else if (stateText == 103) {

		textActor->SetInput("Walk_forward");
		textActor->Modified();

		stateText = 104;

		}
		else if (stateText == 104) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 106;

		}
		else if (stateText == 106) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 108;

		}
		else if (stateText == 108) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 109;

		}
		else if (stateText == 109) {

		textActor->SetInput("Rd15");
		textActor->Modified();

		stateText = 110;

		}
		else if (stateText == 110) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 111;

		}
		else if (stateText == 111) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 112;

		}
		else if (stateText == 112) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 113;

		}
		else if (stateText == 113) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 114;

		}
		else if (stateText == 114) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 116;

		}
		else if (stateText == 116) {

		textActor->SetInput("Rd15");
		textActor->Modified();

		stateText = 117;

		}
		else if (stateText == 117) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 118;

		}
		else if (stateText == 118) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 119;

		}
		else if (stateText == 119) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 120;

		}
		else if (stateText == 120) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 121;

		}
		else if (stateText == 121) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 123;

		}
		else if (stateText == 123) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 124;

		}
		else if (stateText == 124) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 125;

		}
		else if (stateText == 125) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 127;

		}
		else if (stateText == 127) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 128;

		}
		else if (stateText == 128) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 130;

		}
		else if (stateText == 130) {

		textActor->SetInput("Radwn");
		textActor->Modified();

		stateText = 131;

		}
		else if (stateText == 131) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 132;

		}
		else if (stateText == 132) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 134;

		}
		else if (stateText == 134) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 135;

		}
		else if (stateText == 135) {

		textActor->SetInput("Rd15");
		textActor->Modified();

		stateText = 137;

		}
		else if (stateText == 137) {

		textActor->SetInput("Radx");
		textActor->Modified();

		stateText = 138;

		}
		else if (stateText == 138) {

		textActor->SetInput("Walk_backwards");
		textActor->Modified();

		stateText = 139;

		}
		else if (stateText == 139) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 140;

		}
		else if (stateText == 140) {

		textActor->SetInput("Insert");
		textActor->Modified();

		stateText = 141;

		}
		else if (stateText == 141) {

		textActor->SetInput("Rdx (rd1)");
		textActor->Modified();

		stateText = 143;

		}
		else if (stateText == 143) {

		textActor->SetInput("End");
		textActor->Modified();

		stateText = 144;

		}
	}


	if (key == "Left") {

		
		if (stateText == 1) {

			textActor->SetInput("Start");
			textActor->Modified();

			stateText = 0;
		}

		else if (stateText == 3) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 1;



		}
		else if (stateText == 4) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 3;



		}

		else if (stateText == 5) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 4;

		}

		else if (stateText == 7) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 5;

		}

		else if (stateText == 8) {

			textActor->SetInput("Walk_backward");
			textActor->Modified();

			stateText = 7;

		}
		else if (stateText == 10) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 8;

		}

		else if (stateText == 12) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 10;

		}

		else if (stateText == 13) {

			textActor->SetInput("Radx (rd1)");
			textActor->Modified();

			stateText = 12;

		}
		else if (stateText == 14) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 13;

		}
		else if (stateText == 15) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 14;

		}
		else if (stateText == 17) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 15;

		}

		else if (stateText == 18) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 17;

		}
		else if (stateText == 20) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 18;

		}

		else if (stateText == 21) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 20;

		}
		else if (stateText == 22) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 21;

		}
		else if (stateText == 23) {

			textActor->SetInput("Walk_forwards");
			textActor->Modified();

			stateText = 22;

		}
		else if (stateText == 25) {

			textActor->SetInput("Walk_forwards");
			textActor->Modified();

			stateText = 23;

		}
		else if (stateText == 26) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 25;

		}
		else if (stateText == 27) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 26;

		}

		else if (stateText == 28) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 27;

		}
		else if (stateText == 30) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 28;

		}

		else if (stateText == 31) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 30;

		}
		else if (stateText == 32) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 31;

		}
		else if (stateText == 33) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 32;

		}
		else if (stateText == 34) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 33;

		}
		else if (stateText == 36) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 34;

		}

		else if (stateText == 37) {

			textActor->SetInput("Rad2");
			textActor->Modified();

			stateText = 36;

		}
		else if (stateText == 38) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 37;

		}
		else if (stateText == 39) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 38;

		}
		else if (stateText == 40) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 39;

		}
		else if (stateText == 42) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 40;

		}

		else if (stateText == 43) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 42;

		}
		else if (stateText == 45) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 43;

		}

		else if (stateText == 46) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 45;

		}
		else if (stateText == 48) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 46;

		}
		else if (stateText == 49) {

			textActor->SetInput("Swing");
			textActor->Modified();

			stateText = 48;

		}
		else if (stateText == 51) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 49;

		}
		else if (stateText == 52) {

			textActor->SetInput("Swing");
			textActor->Modified();

			stateText = 51;

		}
		else if (stateText == 53) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 52;

		}
		else if (stateText == 54) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 53;

		}
		else if (stateText == 56) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 54;

		}
		else if (stateText == 57) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 56;

		}
		else if (stateText == 58) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 57;

		}
		else if (stateText == 60) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 58;

		}
		else if (stateText == 61) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 60;

		}
		else if (stateText == 62) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 61;

		}
		else if (stateText == 63) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 62;

		}
		else if (stateText == 65) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 63;

		}
		else if (stateText == 66) {

			textActor->SetInput("Swing");
			textActor->Modified();

			stateText = 65;

		}
		else if (stateText == 67) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 66;

		}
		else if (stateText == 68) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 67;

		}
		else if (stateText == 70) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 68;

		}
		else if (stateText == 71) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 70;

		}
		else if (stateText == 72) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 71;

		}
		else if (stateText == 73) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 72;

		}
		else if (stateText == 74) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 73;
		}
		else if (stateText == 76) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 74;
		}
		else if (stateText == 77) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 76;
		}
		else if (stateText == 78) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 77;
		}
		else if (stateText == 79) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 78;
		}

		else if (stateText == 81) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 79;

		}
		else if (stateText == 82) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 81;

		}
		else if (stateText == 83) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 82;

		}
		else if (stateText == 84) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 83;

		}
		else if (stateText == 86) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 84;

		}
		else if (stateText == 87) {

			textActor->SetInput("Swing");
			textActor->Modified();

			stateText = 86;

		}
		else if (stateText == 88) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 87;

		}
		else if (stateText == 89) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 88;

		}
		else if (stateText == 91) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 89;

		}
		else if (stateText == 92) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 91;

		}
		else if (stateText == 94) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 92;

		}
		else if (stateText == 95) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 94;

		}
		else if (stateText == 97) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 95;

		}
		else if (stateText == 98) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 97;

		}
		else if (stateText == 99) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 98;

		}
		else if (stateText == 101) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 99;

		}
		else if (stateText == 102) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 101;

		}
		else if (stateText == 103) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 102;

		}
		else if (stateText == 104) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 103;

		}
		else if (stateText == 106) {

			textActor->SetInput("Walk_forward");
			textActor->Modified();

			stateText = 104;

		}
		else if (stateText == 108) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 106;

		}
		else if (stateText == 109) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 108;

		}
		else if (stateText == 110) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 109;

		}
		else if (stateText == 111) {

			textActor->SetInput("Rd15");
			textActor->Modified();

			stateText = 110;

		}
		else if (stateText == 112) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 111;

		}
		else if (stateText == 113) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 112;

		}
		else if (stateText == 114) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 113;

		}
		else if (stateText == 116) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 114;

		}
		else if (stateText == 117) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 116;

		}
		else if (stateText == 118) {

			textActor->SetInput("Rd15");
			textActor->Modified();

			stateText = 117;

		}
		else if (stateText == 119) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 118;

		}
		else if (stateText == 120) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 119;

		}
		else if (stateText == 121) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 120;

		}
		else if (stateText == 123) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 121;

		}
		else if (stateText == 124) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 123;

		}
		else if (stateText == 125) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 124;

		}
		else if (stateText == 127) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 125;

		}
		else if (stateText == 128) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 127;

		}
		else if (stateText == 130) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 128;

		}
		else if (stateText == 131) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 130;

		}
		else if (stateText == 132) {

			textActor->SetInput("Radwn");
			textActor->Modified();

			stateText = 131;

		}
		else if (stateText == 134) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 132;

		}
		else if (stateText == 135) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 134;

		}
		else if (stateText == 137) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 135;

		}
		else if (stateText == 138) {

			textActor->SetInput("Rd15");
			textActor->Modified();

			stateText = 137;

		}
		else if (stateText == 139) {

			textActor->SetInput("Radx");
			textActor->Modified();

			stateText = 138;

		}
		else if (stateText == 140) {

			textActor->SetInput("Walk_backwards");
			textActor->Modified();

			stateText = 139;

		}
		else if (stateText == 141) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 140;

		}
		else if (stateText == 143) {

			textActor->SetInput("Insert");
			textActor->Modified();

			stateText = 141;

		}
		else if (stateText == 144) {

			textActor->SetInput("Rdx (rd1)");
			textActor->Modified();

			stateText = 143;

		}
	}


}

void KeypressCallbackFunction9(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube9 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 50) {

			state = 51;
		}

		else if (state == 51) {


			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube9->Modified();
			cube9->Update();


			state = 52;

		}

		else if (state == 52) {

			cube9->SetXLength(0.125);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.5);
			cube9->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 53;

		}

		else if (state == 53) {



			cube9->SetXLength(0.125);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.5);
			cube9->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube9->Modified();
			cube9->Update();

			state = 54;

		}
		else if (state == 54) {

			cube9->SetXLength(0.125);
			cube9->SetYLength(0.5);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 55;
		}

		else if (state == 61 || state == 3007) {

			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.375, 0.125, -0.375, -0.25, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 62;
		}

		else if (state == 62) {

			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.5, 0, -0.375, -0.25, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 63;
		}

		else if (state == 63) {

			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-1, -0.5, -0.5, -0.375, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 64;
		}

	}
	if (key == "Left") {

		if (state == 61) {
			state = 3007;
		}

		if (state == 52) {


			cube9->SetXLength(0);
			cube9->SetYLength(0);
			cube9->SetZLength(0);
			cube9->SetBounds(0,0,0,0,0,0);

			cube9->Modified();
			cube9->Update();


			state = 51;

		}
		if (state == 53) {


			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube9->Modified();
			cube9->Update();


			state = 52;

		}
		if (state == 54) {

			cube9->SetXLength(0.125);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.5);
			cube9->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.375, 0.125);

			cube9->Modified();
			cube9->Update();


			state = 53;

		}
		if (state == 56) {


			cube9->SetXLength(0.125);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.5);
			cube9->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.5, 0);

			cube9->Modified();
			cube9->Update();


			state = 54;

		}

		else if (state == 62) {

			cube9->SetXLength(0.125);
			cube9->SetYLength(0.5);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 61;
		}

		else if (state == 63) {

			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.375, 0.125, -0.375, -0.25, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 62;
		}

		else if (state == 65) {

			cube9->SetXLength(0.5);
			cube9->SetYLength(0.125);
			cube9->SetZLength(0.125);
			cube9->SetBounds(-0.5, 0, -0.375, -0.25, 0, 0.125);

			cube9->Modified();
			cube9->Update();

			state = 63;
		}
	}
}

void KeypressCallbackFunction10(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube10 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 55) {

			state = 56;
		}

		else if (state == 56) {


			cube10->SetXLength(0.5);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.125);
			cube10->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube10->Modified();
			cube10->Update();


			state = 57;

		}

		else if (state == 57) {


			cube10->SetXLength(0.125);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.5);
			cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -1, -0.5);

			cube10->Modified();
			cube10->Update();


			state = 58;

		}

		else if (state == 58) {

			cube10->SetXLength(0.125);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.5);
			cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.875, -0.375);

			cube10->Modified();
			cube10->Update();

			state = 59;

		}

		else if (state == 64) {
			state = 65;
		}

		else if (state == 65) {

			cube10->SetXLength(0.125);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.5);
			cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.75, -0.25);

			cube10->Modified();
			cube10->Update();

			state = 66;

		}

		else if (state == 66) {

			cube10->SetXLength(0.125);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.5);
			cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.625, -0.125);

			cube10->Modified();
			cube10->Update();

			state = 67;

		}

		else if (state == 67) {

			cube10->SetXLength(0.125);
			cube10->SetYLength(0.125);
			cube10->SetZLength(0.5);
			cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

			cube10->Modified();
			cube10->Update();

			state = 68;

		}

		else if (state == 68) {

			cube10->SetXLength(0.125);
			cube10->SetYLength(0.5);
			cube10->SetZLength(0.125);
			cube10->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

			cube10->Modified();
			cube10->Update();

			state = 69;

		}

		else if (state == 112 || state == 3013) {

		cube10->SetXLength(0.5);
		cube10->SetYLength(0.125);
		cube10->SetZLength(0.125);
		cube10->SetBounds(-0.375, 0.125, -0.375, -0.26, 0, 0.125);

		cube10->Modified();
		cube10->Update();

		state = 113;

		}

		else if (state == 113) {

		cube10->SetXLength(0.5);
		cube10->SetYLength(0.125);
		cube10->SetZLength(0.125);
		cube10->SetBounds(-0.5, 0, -0.375, -0.26, 0, 0.125);

		cube10->Modified();
		cube10->Update();

		state = 114;

		}

		else if (state == 114) {

		cube10->SetXLength(0.125);
		cube10->SetYLength(0.5);
		cube10->SetZLength(0.125);
		cube10->SetBounds(0, 0.125, -0.375, 0.125, 0, 0.125);

		cube10->Modified();
		cube10->Update();

		state = 115;

		}
		

	}
	if (key == "Left") {

		if (state == 112) {
			state = 3013;
		}

     if (state == 57) {


		cube10->SetXLength(0);
		cube10->SetYLength(0);
		cube10->SetZLength(0);
		cube10->SetBounds(0,0,0,0,0,0);

		cube10->Modified();
		cube10->Update();


		state = 56;

	 }

	 else if (state == 58) {


		 cube10->SetXLength(0.5);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.125);
		 cube10->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

		 cube10->Modified();
		 cube10->Update();


		 state = 57;

	 }
	 else if (state == 60) {


		 cube10->SetXLength(0.125);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.5);
		 cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -1, -0.5);

		 cube10->Modified();
		 cube10->Update();


		 state = 58;

	 }

	 else if (state == 66) {

		 cube10->SetXLength(0.125);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.5);
		 cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.875, -0.375);

		 cube10->Modified();
		 cube10->Update();

		 state = 65;

	 }

	 else if (state == 67) {

		 cube10->SetXLength(0.125);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.5);
		 cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.75, -0.25);

		 cube10->Modified();
		 cube10->Update();

		 state = 66;

	 }

	 else if (state == 68) {

		 cube10->SetXLength(0.125);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.5);
		 cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.625, -0.125);

		 cube10->Modified();
		 cube10->Update();

		 state = 67;

	 }

	 else if (state == 70) {

		 cube10->SetXLength(0.125);
		 cube10->SetYLength(0.125);
		 cube10->SetZLength(0.5);
		 cube10->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

		 cube10->Modified();
		 cube10->Update();

		 state = 68;

	 }

	 else if (state == 113) {

	 cube10->SetXLength(0.125);
	 cube10->SetYLength(0.5);
	 cube10->SetZLength(0.125);
	 cube10->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

	 cube10->Modified();
	 cube10->Update();
	 state = 112;

		}

	 else if (state == 114) {

	 cube10->SetXLength(0.5);
	 cube10->SetYLength(0.125);
	 cube10->SetZLength(0.125);
	 cube10->SetBounds(-0.375, 0.125, -0.375, -0.26, 0, 0.125);

	 cube10->Modified();
	 cube10->Update();
	 state = 113;

		}

	 else if (state == 116) {

	 cube10->SetXLength(0.5);
	 cube10->SetYLength(0.125);
	 cube10->SetZLength(0.125);
	 cube10->SetBounds(-0.5, 0, -0.375, -0.26, 0, 0.125);

	 cube10->Modified();
	 cube10->Update();

	 state = 114;

		}

	}
}

void KeypressCallbackFunction11(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube11 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 59) {

			state = 60;
		}

		else if (state == 60) {


			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();



			state = 61;

		}

		else if (state == 69) {
			state = 70;
			
		}

		else if (state == 70) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 71;

		}

		else if (state == 71) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 72;

		}

		else if (state == 72) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.625, -0.125, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 73;

		}

		else if (state == 73) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.5, 0, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 74;

		}

		else if (state == 74) {

			cube11->SetXLength(0.125);
			cube11->SetYLength(0.5);
			cube11->SetZLength(0.125);
			cube11->SetBounds(0, 0.125, -0.375, 0.125, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 75;

		}

		else if (state == 83 || state == 3008) {

			cube11->SetXLength(0.125);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.5);
			cube11->SetBounds(0, 0.125, -0.375, -0.26, -0.375, 0.125);

			cube11->Modified();
			cube11->Update();

			state = 84;

		}

		else if (state == 84) {

		cube11->SetXLength(0.125);
		cube11->SetYLength(0.125);
		cube11->SetZLength(0.5);
		cube11->SetBounds(0, 0.125, -0.5, -0.375, 0.125, 0.625);

		cube11->Modified();
		cube11->Update();

		state = 85;

		}

	}
	if (key == "Left") {

		if (state == 83) {
			state = 3008;
		}

		else if (state == 3007) {

			cube11->SetXLength(0);
			cube11->SetYLength(0);
			cube11->SetZLength(0);
			cube11->SetBounds(0, 0,0,0,0,0);

			cube11->Modified();
			cube11->Update();

			state = 60;

		}

		if (state == 71) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 70;

		}

		if (state == 72) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 71;

		}

		if (state == 73) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 72;

		}

		if (state == 74) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.625, -0.125, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 73;

		}

		if (state == 76) {

			cube11->SetXLength(0.5);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.125);
			cube11->SetBounds(-0.5, 0, -0.375, -0.260, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 74;

		}

		else if (state == 84) {

			cube11->SetXLength(0.125);
			cube11->SetYLength(0.5);
			cube11->SetZLength(0.125);
			cube11->SetBounds(0, 0.125, -0.375, 0.125, -0.5, -0.375);

			cube11->Modified();
			cube11->Update();

			state = 83;

		}

		else if (state == 86) {

			cube11->SetXLength(0.125);
			cube11->SetYLength(0.125);
			cube11->SetZLength(0.5);
			cube11->SetBounds(0, 0.125, -0.375, -0.26, -0.375, 0.125);

			cube11->Modified();
			cube11->Update();

			state = 84;

		}
	}
}

void KeypressCallbackFunction12(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube12 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 75) {

			state = 76;
		}

		else if (state == 76) {


			cube12->SetXLength(0.5);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.125);
			cube12->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube12->Modified();
			cube12->Update();

			state = 77;

		}

		else if (state == 77) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.5);
			cube12->SetBounds(-0.5, -0.375, -0.375, -0.260, -1, -0.5);

			cube12->Modified();
			cube12->Update();

			state = 78;

		}

		else if (state == 78) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.5);
			cube12->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.875, -0.375);

			cube12->Modified();
			cube12->Update();

			state = 79;

		}

		else if (state == 79) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.5);
			cube12->SetZLength(0.125);
			cube12->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.375, -0.25);

			cube12->Modified();
			cube12->Update();

			state = 80;

		}

		else if (state == 117 || state == 3014) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.5);
			cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.875, -0.375);

			cube12->Modified();
			cube12->Update();

			state = 118;

		}

		else if (state == 118) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.5);
			cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.75, -0.25);

			cube12->Modified();
			cube12->Update();

			state = 119;

		}

		else if (state == 119) {

			cube12->SetXLength(0.125);
			cube12->SetYLength(0.125);
			cube12->SetZLength(0.5);
			cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.625, -0.125);

			cube12->Modified();
			cube12->Update();

			state = 120;

		}

		else if (state == 120) {

		cube12->SetXLength(0.125);
		cube12->SetYLength(0.125);
		cube12->SetZLength(0.5);
		cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

		cube12->Modified();
		cube12->Update();

		state = 121;

		}

		else if (state == 121) {

		cube12->SetXLength(0.125);
		cube12->SetYLength(0.5);
		cube12->SetZLength(0.125);
		cube12->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

		cube12->Modified();
		cube12->Update();

		state = 122;

		}

		else if (state == 124 || state == 3015) {

		cube12->SetXLength(0.5);
		cube12->SetYLength(0.125);
		cube12->SetZLength(0.125);
		cube12->SetBounds(-1, -0.5, -0.375, -0.25, 0, 0.125);

		cube12->Modified();
		cube12->Update();

		state = 125;

		}

		else if (state == 125) {

		cube12->SetXLength(0.5);
		cube12->SetYLength(0.125);
		cube12->SetZLength(0.125);
		cube12->SetBounds(-0.875, -0.375, -0.375, -0.25, 0, 0.125);

		cube12->Modified();
		cube12->Update();

		state = 126;

		}

		else if (state == 128 || state == 3016) {

		cube12->SetXLength(0.125);
		cube12->SetYLength(0.5);
		cube12->SetZLength(0.125);
		cube12->SetBounds(-0.375, -0.25, -0.375, 0.125, 0, 0.125);

		cube12->Modified();
		cube12->Update();

		state = 129;

		}

		else if (state == 135 || state == 3017) {

		cube12->SetXLength(0.5);
		cube12->SetYLength(0.125);
		cube12->SetZLength(0.125);
		cube12->SetBounds(-0.5, 0, 0.125, 0.25, 0, 0.125);

		cube12->Modified();
		cube12->Update();

		state = 136;

		}




	}
	if (key == "Left") {

		if (state == 117) {
			state = 3014;
		}

		if (state == 124) {
			state = 3015;
		}

		if (state == 128) {
			state = 3016;
		}

		if (state == 135) {
			state = 3017;
		}



	 if (state == 77) {


		cube12->SetXLength(0);
		cube12->SetYLength(0);
		cube12->SetZLength(0);
		cube12->SetBounds(0,0,0,0,0,0);

		cube12->Modified();
		cube12->Update();

		state = 76;

	}

	 if (state == 78) {


		 cube12->SetXLength(0.5);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.125);
		 cube12->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

		 cube12->Modified();
		 cube12->Update();

		 state = 77;

	 }

	 if (state == 79) {


		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.260, -1, -0.5);

		 cube12->Modified();
		 cube12->Update();

		 state = 78;

	 }

	 if (state == 81) {


		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.875, -0.375);

		 cube12->Modified();
		 cube12->Update();

		 state = 79;

	 }
	 else if (state == 118) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.5);
		 cube12->SetZLength(0.125);
		 cube12->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.375, -0.25);

		 cube12->Modified();
		 cube12->Update();

		 state = 117;

	 }
	 else if (state == 119) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.875, -0.375);

		 cube12->Modified();
		 cube12->Update();

		 state = 118;

	 }
	 else if (state == 120) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.75, -0.25);

		 cube12->Modified();
		 cube12->Update();

		 state = 119;

	 }
	 else if (state == 121) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.625, -0.125);

		 cube12->Modified();
		 cube12->Update();


		 state = 120;

	 }

	 else if (state == 123) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.5);
		 cube12->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

		 cube12->Modified();
		 cube12->Update();

		 state = 121;

	 }

	 else if (state == 125) {

		 cube12->SetXLength(0.125);
		 cube12->SetYLength(0.5);
		 cube12->SetZLength(0.125);
		 cube12->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

		 cube12->Modified();
		 cube12->Update();

		 state = 124;
	 }

	 else if (state == 127) {

		 cube12->SetXLength(0.5);
		 cube12->SetYLength(0.125);
		 cube12->SetZLength(0.125);
		 cube12->SetBounds(-1, -0.5, -0.375, -0.25, 0, 0.125);

		 cube12->Modified();
		 cube12->Update();

		 state = 125;
	 }

	 else if (state == 130) {

	 cube12->SetXLength(0.5);
	 cube12->SetYLength(0.125);
	 cube12->SetZLength(0.125);
	 cube12->SetBounds(-0.875, -0.375, -0.375, -0.25, 0, 0.125);

	 cube12->Modified();
	 cube12->Update();

	 state = 128;

		}

	 else if (state == 137) {

	 cube12->SetXLength(0.125);
	 cube12->SetYLength(0.5);
	 cube12->SetZLength(0.125);
	 cube12->SetBounds(-0.375, -0.25, -0.375, 0.125, 0, 0.125);

	 cube12->Modified();
	 cube12->Update();

	 state = 135;

		}
	}
}

void KeypressCallbackFunction13(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube13 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 80) {

			state = 81;
		}

		else if (state == 81) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 82;

		}

		else if (state == 82) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.5);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 83;

		}

		else if (state == 85) {
			state = 86;
		}

		else if (state == 86) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 87;

		}

		else if (state == 87) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 88;

		}

		else if (state == 88) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.5);
			cube13->SetBounds(0, 0.125, -0.375, -0.26, -0.375, 0.125);

			cube13->Modified();
			cube13->Update();

			state = 89;

		}


		else if (state == 89) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.5);
			cube13->SetBounds(0, 0.125, -0.375, -0.26, -0.5, -0);

			cube13->Modified();
			cube13->Update();

			state = 90;

		}

		else if (state == 95 || state == 3009) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.5);
			cube13->SetZLength(0.125);
			cube13->SetBounds(0, 0.125, -0.375, 0.125, 0, 0.125);

			cube13->Modified();
			cube13->Update();

			state = 96;
		}

		else if (state == 104 || state == 3010) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.125);
		cube13->SetZLength(0.5);
		cube13->SetBounds(0, 0.125, -0.375, -0.26, 0.125, 0.625);

		cube13->Modified();
		cube13->Update();

		state = 105;

		}

		else if (state == 110 || state == 3012) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.125);
		cube13->SetZLength(0.5);
		cube13->SetBounds(0, 0.125, -0.375, -0.26, 0, 0.5);

		cube13->Modified();
		cube13->Update();

		state = 111;

		}

		else if (state == 111) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.5);
		cube13->SetZLength(0.125);
		cube13->SetBounds(0, 0.125, -0.375, 0.125, -0.125, 0);

		cube13->Modified();
		cube13->Update();

		state = 112;

		}

		else if (state == 115) {
		state = 116;
		}

		else if (state == 116) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.125);
		cube13->SetZLength(0.5);
		cube13->SetBounds(0, 0.125, 0.125, 0.25, -0.375, 0.125);

		cube13->Modified();
		cube13->Update();

		state = 117;

		}
	}
	if (key == "Left") {

		if (state == 95) {
			state = 3009;
		}

		if (state == 104) {
			state = 3010;
		}

		if (state == 110) {
			state = 3012;
		}

		if (state == 82) {

			cube13->SetXLength(0);
			cube13->SetYLength(0);
			cube13->SetZLength(0);
			cube13->SetBounds(0,0,0,0,0,0);

			cube13->Modified();
			cube13->Update();

			state = 81;
		}

		else if (state == 3008) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 82;
		}

		else if (state == 87) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.5);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 86;
		}

		else if (state == 88) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 87;
		}

		else if (state == 89) {

			cube13->SetXLength(0.5);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.125);
			cube13->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

			cube13->Modified();
			cube13->Update();

			state = 88;
		}

		else if (state == 91) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.5);
			cube13->SetBounds(0, 0.125, -0.375, -0.26, -0.375, 0.125);

			cube13->Modified();
			cube13->Update();

			state = 89;
		}

		else if (state == 97) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.125);
			cube13->SetZLength(0.5);
			cube13->SetBounds(0, 0.125, -0.375, -0.26, -0.5, -0);


			cube13->Modified();
			cube13->Update();

			state = 95;
		}

		else if (state == 106) {

			cube13->SetXLength(0.125);
			cube13->SetYLength(0.5);
			cube13->SetZLength(0.125);
			cube13->SetBounds(0, 0.125, -0.375, 0.125, 0, 0.125);

			cube13->Modified();
			cube13->Update();

			state = 104;

		}

		else if (state == 111) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.125);
		cube13->SetZLength(0.5);
		cube13->SetBounds(0, 0.125, -0.375, -0.26, 0.125, 0.625);

		cube13->Modified();
		cube13->Update();

		state = 110;

		}

		else if (state == 3013) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.125);
		cube13->SetZLength(0.5);
		cube13->SetBounds(0, 0.125, -0.375, -0.26, 0, 0.5);

		cube13->Modified();
		cube13->Update();

		state = 111;

		}

		else if (state == 3014) {

		cube13->SetXLength(0.125);
		cube13->SetYLength(0.5);
		cube13->SetZLength(0.125);
		cube13->SetBounds(0, 0.125, -0.375, 0.125, -0.125, 0);

		cube13->Modified();
		cube13->Update();

		state = 116;

		}

	}
}

void KeypressCallbackFunction14(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube14 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 90) {

			state = 91;
		}

		else if (state == 91) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 92;

		}

		else if (state == 92) {

			cube14->SetXLength(0.125);
			cube14->SetYLength(0.5);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 93;

		}

		else if (state == 96) {
			state = 97;
		}

		else if (state == 97) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 98;

		}

		else if (state == 98) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 99;

		}

		else if (state == 99) {

			cube14->SetXLength(0.125);
			cube14->SetYLength(0.5);
			cube14->SetZLength(0.125);
			cube14->SetBounds(0, 0.125, -0.375, 0.125, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 100;

		}

		
	}
	if (key == "Left") {

		if (state == 92) {

			cube14->SetXLength(0);
			cube14->SetYLength(0);
			cube14->SetZLength(0);
			cube14->SetBounds(0,0,0,0,0,0);

			cube14->Modified();
			cube14->Update();

			state = 91;

		}

		else if (state == 94) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 92;

		}

		else if (state == 98) {

			cube14->SetXLength(0.125);
			cube14->SetYLength(0.5);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 97;

		}

		else if (state == 99) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.375, 0.125, -0.375, -0.26, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 98;

		}

		else if (state == 101) {

			cube14->SetXLength(0.5);
			cube14->SetYLength(0.125);
			cube14->SetZLength(0.125);
			cube14->SetBounds(-0.5, 0, -0.375, -0.26, -0.5, -0.375);

			cube14->Modified();
			cube14->Update();

			state = 99;

		}
	}
}

void KeypressCallbackFunction15(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube15 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 93) {

			state = 94;
		}

		else if (state == 94) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 95;

		}

		else if (state == 100) {
			state = 101;
		}

		else if (state == 101) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 102;

		}

		else if (state == 102) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 103;

		}

		else if (state == 103) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.625, -0.125, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 104;

		}

		else if (state == 105) {
			state = 106;
		}

		else if (state == 106) {

			cube15->SetXLength(0.125);
			cube15->SetYLength(0.5);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.125, 0, -0.375, 0.125, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 107;

		}

		else if (state == 109 || state == 3011) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.375, 0.125, 0.125, 0.25, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 110;

		}
	}
	if (key == "Left") {

		if (state == 109) {
			state = 3011;
		}

		if (state == 3009) {

			cube15->SetXLength(0);
			cube15->SetYLength(0);
			cube15->SetZLength(0);
			cube15->SetBounds(0,0,0,0,0,0);

			cube15->Modified();
			cube15->Update();

			state = 94;

		}

		else if (state == 102) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 101;

		}
		else if (state == 103) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.875, -0.375, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 102;

		}
		else if (state == 3010) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.75, -0.25, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 103;

		}

		else if (state == 108) {

			cube15->SetXLength(0.5);
			cube15->SetYLength(0.125);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.625, -0.125, -0.375, -0.260, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 106;

		}

		else if (state == 3012) {

			cube15->SetXLength(0.125);
			cube15->SetYLength(0.5);
			cube15->SetZLength(0.125);
			cube15->SetBounds(-0.125, 0, -0.375, 0.125, -0.5, -0.375);

			cube15->Modified();
			cube15->Update();

			state = 109;

		}

	}
}

void KeypressCallbackFunction16(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube16 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 107) {

			state = 108;
		}

		else if (state == 108) {

			cube16->SetXLength(0.5);
			cube16->SetYLength(0.125);
			cube16->SetZLength(0.125);
			cube16->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube16->Modified();
			cube16->Update();

			state = 109;

		}

		else if (state == 122) {
			state = 123;
		}

		else if (state == 123) {

			cube16->SetXLength(0.125);
			cube16->SetYLength(0.125);
			cube16->SetZLength(0.5);
			cube16->SetBounds(-0.5, -0.375, -0.375, -0.26, -1, -0.5);

			cube16->Modified();
			cube16->Update();

			state = 124;

		}

		else if (state == 126) {
			state = 127;
		}

		else if (state == 127) {

			cube16->SetXLength(0.125);
			cube16->SetYLength(0.5);
			cube16->SetZLength(0.125);
			cube16->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

			cube16->Modified();
			cube16->Update();

			state = 128;

		}

		else if (state == 129) {
			state = 130;
		}

		else if (state == 130) {

			cube16->SetXLength(0.125);
			cube16->SetYLength(0.125);
			cube16->SetZLength(0.5);
			cube16->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.375, 0.125);

			cube16->Modified();
			cube16->Update();

			state = 131;

		}

		else if (state == 131) {

			cube16->SetXLength(0.125);
			cube16->SetYLength(0.125);
			cube16->SetZLength(0.5);
			cube16->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

			cube16->Modified();
			cube16->Update();

			state = 132;

		}

		else if (state == 132) {

			cube16->SetXLength(0.125);
			cube16->SetYLength(0.5);
			cube16->SetZLength(0.125);
			cube16->SetBounds(-0.5, -0.375, -0.375, 0.125, 0, 0.125);

			cube16->Modified();
			cube16->Update();

			state = 133;

		}
	}
	

	
	if (key == "Left") {

	 if (state == 3011) {

		cube16->SetXLength(0);
		cube16->SetYLength(0);
		cube16->SetZLength(0);
		cube16->SetBounds(0,0,0,0,0,0);

		cube16->Modified();
		cube16->Update();

		state = 108;

	}

	 else if (state == 3015) {

		 cube16->SetXLength(0.5);
		 cube16->SetYLength(0.125);
		 cube16->SetZLength(0.125);
		 cube16->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

		 cube16->Modified();
		 cube16->Update();

		 state = 123;

	 }

	 else if (state == 3016) {

		 cube16->SetXLength(0.125);
		 cube16->SetYLength(0.125);
		 cube16->SetZLength(0.5);
		 cube16->SetBounds(-0.5, -0.375, -0.375, -0.26, -1, -0.5);

		 cube16->Modified();
		 cube16->Update();

		 state = 127;

	 }

	 else if (state == 131) {

		 cube16->SetXLength(0.125);
		 cube16->SetYLength(0.5);
		 cube16->SetZLength(0.125);
		 cube16->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.5, -0.375);

		 cube16->Modified();
		 cube16->Update();

		 state = 130;

	 }

	 else if (state == 132) {

		 cube16->SetXLength(0.125);
		 cube16->SetYLength(0.125);
		 cube16->SetZLength(0.5);
		 cube16->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.375, 0.125);

		 cube16->Modified();
		 cube16->Update();

		 state = 131;

	 }

	 else if (state == 134) {

		 cube16->SetXLength(0.125);
		 cube16->SetYLength(0.125);
		 cube16->SetZLength(0.5);
		 cube16->SetBounds(-0.5, -0.375, -0.375, -0.25, -0.5, 0);

		 cube16->Modified();
		 cube16->Update();

		 state = 132;

	 }

	}
}

void KeypressCallbackFunction17(vtkObject* caller, long unsigned int vtkNotUsed(eventId), void* clientData, void* vtkNotUsed(callData))
{


	std::cout << "Keypress callback" << std::endl;

	vtkRenderWindowInteractor* iren =
		static_cast<vtkRenderWindowInteractor*>(caller);

	std::cout << "Pressed: " << iren->GetKeySym() << std::endl;

	key = iren->GetKeySym();


	// Prove that we can access the sphere source
	vtkCubeSource* cube17 =
		static_cast<vtkCubeSource*>(clientData);


	if (key == "Right") {

		if (state == 133) {

			state = 134;
		}

		else if (state == 134) {

			cube17->SetXLength(0.5);
			cube17->SetYLength(0.125);
			cube17->SetZLength(0.125);
			cube17->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

			cube17->Modified();
			cube17->Update();

			state = 135;

		}

		else if (state == 136) {
			state = 137;
		}

		else if (state == 137) {

			cube17->SetXLength(0.125);
			cube17->SetYLength(0.125);
			cube17->SetZLength(0.5);
			cube17->SetBounds(-0.5, -0.375, -0.375, -0.260, -1, -0.5);

			cube17->Modified();
			cube17->Update();

			state = 138;

		}

		else if (state == 138) {

			cube17->SetXLength(0.125);
			cube17->SetYLength(0.125);
			cube17->SetZLength(0.5);
			cube17->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.875, -0.375);

			cube17->Modified();
			cube17->Update();

			state = 139;

		}

		else if (state == 139) {

			cube17->SetXLength(0.125);
			cube17->SetYLength(0.5);
			cube17->SetZLength(0.125);
			cube17->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.375, -0.25);

			cube17->Modified();
			cube17->Update();

			state = 140;

		}

		else if (state == 142) {
			state = 143;
		}

		else if (state == 143) {

			cube17->SetXLength(0.125);
			cube17->SetYLength(0.125);
			cube17->SetZLength(0.5);
			cube17->SetBounds(-0.5, -0.375, 0.125, 0.25, -0.5, 0);

			cube17->Modified();
			cube17->Update();

			state = 144;

		}
	}



	if (key == "Left") {

	 if (state == 3017) {

		cube17->SetXLength(0);
		cube17->SetYLength(0);
		cube17->SetZLength(0);
		cube17->SetBounds(0,0,0,0,0,0);

		cube17->Modified();
		cube17->Update();

		state = 134;

	}

	 else if (state == 138) {

		 cube17->SetXLength(0.5);
		 cube17->SetYLength(0.125);
		 cube17->SetZLength(0.125);
		 cube17->SetBounds(-1, -0.5, -0.375, -0.260, -0.5, -0.375);

		 cube17->Modified();
		 cube17->Update();

		 state = 137;

	 }

	 else if (state == 139) {

		 cube17->SetXLength(0.125);
		 cube17->SetYLength(0.125);
		 cube17->SetZLength(0.5);
		 cube17->SetBounds(-0.5, -0.375, -0.375, -0.260, -1, -0.5);

		 cube17->Modified();
		 cube17->Update();

		 state = 138;

	 }

	 else if (state == 3018) {

		 cube17->SetXLength(0.125);
		 cube17->SetYLength(0.125);
		 cube17->SetZLength(0.5);
		 cube17->SetBounds(-0.5, -0.375, -0.375, -0.260, -0.875, -0.375);

		 cube17->Modified();
		 cube17->Update();

		 state = 139;

	 }

	 else if (state == 144) {

		 cube17->SetXLength(0.125);
		 cube17->SetYLength(0.5);
		 cube17->SetZLength(0.125);
		 cube17->SetBounds(-0.5, -0.375, -0.375, 0.125, -0.375, -0.25);

		 cube17->Modified();
		 cube17->Update();

		 state = 143;

	 }
	}
}
