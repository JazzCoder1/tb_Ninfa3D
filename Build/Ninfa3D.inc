'-- Output of AutoRegEx. (9/21/2010 7:29:28 AM)
'-- All Rights Reserved 2005-2007 { Bora Savas - borasavas@gmail.com }


''********************************************************************
'' This source _file is part of Ninfa3D Lite
''
'' Copyright (C) 2008-2009 Viz_Fuerte.
'' All rights reserved.
''
'' LIMITED WARRANTY
'' This software is provided "as-is", without any express or implied warranty.
'' In no event shall the author be held liable for any damages arising from the use of this software.
'' This is a contract. By accepting the Ninfa3D Engine (the SOFTWARE), 
'' you (either an individual or a Float entity, the LICENSEE) accept the terms and conditions of this licensing agreement.
'' 
'' If the LICENSEE does not accept the terms and conditions, then LICENSEE must not accept the SOFTWARE.
'' If at a later time the LICENSEE decides not to continue licensing the SOFTWARE under these terms and 
'' conditions, then the LICENSEE must delete permanently all _files constituting the SOFTWARE.
'' 
'' _file: Ninfa3D.bi
''********************************************************************

$Use "Ninfa3D.lib"

TYPEDEF I  Int
TYPEDEF UI  uint
TYPEDEF S  Float

TYPEDEF nENTITY  uint
TYPEDEF nMESH  uint
TYPEDEF nCAMERA  uint
TYPEDEF nSOUND  uint
TYPEDEF nLIGHT  uint
TYPEDEF nSPRITE  uint
TYPEDEF nBODY  uint
TYPEDEF nCHILD  uint
TYPEDEF nFONT  uint
TYPEDEF nTEXTURE  uint
TYPEDEF nTERRAIN  uint
TYPEDEF nREAD  uint
TYPEDEF nWRITE  uint
TYPEDEF nPARTICLE  uint
TYPEDEF nEMITTER  uint
TYPEDEF nSHADER  uint
TYPEDEF nJOINT  uint
TYPEDEF nGUI uint
TYPEDEF nMATERIAL  uint
TYPEDEF nLensFlare  uint
'Def nmillisec()/1000.0f As uint
TYPEDEF nClouds  uint
TYPEDEF nImage  uint
TYPEDEF nGrass  uint
TYPEDEF nBSPNode  uint

'Keyboard
$define KEY_LBUTTON 1
$define KEY_RBUTTON 2
$define KEY_CANCEL 3
$define KEY_MBUTTON 4
$define KEY_XBUTTON1 5
$define KEY_XBUTTON2 6
$define KEY_BACK 8 
$define KEY_TAB 9 
$define KEY_CLEAR 12
$define KEY_RETURN 13 
$define KEY_SHIFT 16
$define KEY_CONTROL 17
$define KEY_MENU 18
$define KEY_PAUSE 19 
$define KEY_CAPITAL 20
$define KEY_KANA 21
$define KEY_HANGUEL 21
$define KEY_HANGUL 21
$define KEY_JUNJA 23
$define KEY_FINAL 24 
$define KEY_HANJA 25
$define KEY_KANJI 25
$define KEY_ESCAPE 27
$define KEY_CONVERT 28 
$define KEY_NONCONVERT 29 
$define KEY_ACCEPT 30
$define KEY_MODECHANGE 31
$define KEY_SPACE 32 
$define KEY_PRIOR 33
$define KEY_NEXT 34
$define KEY_END 35
$define KEY_HOME 36
$define KEY_LEFT 37
$define KEY_UP 38 
$define KEY_RIGHT 39 
$define KEY_DOWN 40 
$define KEY_SELECT 41
$define KEY_PRINT 42 
$define KEY_EXECUT 43
$define KEY_SNAPSHOT 44
$define KEY_INSERT 45 
$define KEY_DELETE 46 
$define KEY_HELP 47
$define KEY_0 48 
$define KEY_1 49
$define KEY_2 50
$define KEY_3 51
$define KEY_4 52 
$define KEY_5 53
$define KEY_6 54
$define KEY_7 55
$define KEY_8 56 
$define KEY_9 57
$define KEY_A 65 
$define KEY_B 66 
$define KEY_C 67 
$define KEY_D 68
$define KEY_E 69
$define KEY_F 70
$define KEY_G 71 
$define KEY_H 72 
$define KEY_I 73 
$define KEY_J 74 
$define KEY_K 75 
$define KEY_L 76 
$define KEY_M 77 
$define KEY_N 78
$define KEY_O 79 
$define KEY_P 80
$define KEY_Q 81
$define KEY_R 82 
$define KEY_S 83 
$define KEY_T 84 
$define KEY_U 85 
$define KEY_V 86
$define KEY_W 87 
$define KEY_X 88 
$define KEY_Y 89
$define KEY_Z 90 
$define KEY_LWIN 91 
$define KEY_RWIN 92
$define KEY_APPS 93 
$define KEY_SLEEP 94
$define KEY_NUMPAD0 96 
$define KEY_NUMPAD1 97 
$define KEY_NUMPAD2 98 
$define KEY_NUMPAD3 99 
$define KEY_NUMPAD4 100 
$define KEY_NUMPAD5 101 
$define KEY_NUMPAD6 102 
$define KEY_NUMPAD7 103
$define KEY_NUMPAD8 104 
$define KEY_NUMPAD9 105
$define KEY_MULTIPLY 106
$define KEY_ADD 107
$define KEY_SEPARATOR 108
$define KEY_SUBTRACT 109
$define KEY_DECIMAL 110
$define KEY_DIVIDE 111
$define KEY_F1 112 
$define KEY_F2 113
$define KEY_F3 114
$define KEY_F4 115
$define KEY_F5 116 
$define KEY_F6 117
$define KEY_F7 118
$define KEY_F8 119
$define KEY_F9 120 
$define KEY_F10 121
$define KEY_F11 122 
$define KEY_F12 123
$define KEY_F13 124
$define KEY_F14 125
$define KEY_F15 126
$define KEY_F16 127 
$define KEY_F17 128 
$define KEY_F18 129 
$define KEY_F19 130
$define KEY_F20 131
$define KEY_F21 132
$define KEY_F22 133
$define KEY_F23 134
$define KEY_F24 135
$define KEY_NUMLOCK 144 
$define KEY_SCROLL 145
$define KEY_LSHIFT 160
$define KEY_RSHIFT 161
$define KEY_LCONTROL 162 
$define KEY_RCONTROL 163
$define KEY_LMENU 164
$define KEY_RMENU 165 
$define KEY_PLUS 187 
$define KEY_COMMA 188
$define KEY_MINUS 189
$define KEY_PERIOD 190
$define KEY_ATTN 246
$define KEY_CRSEL 247
$define KEY_EXSEL 248
$define KEY_EREOF 249
$define KEY_PLAY 250
$define KEY_ZOOM 251
$define KEY_PA1 253
$define KEY_OEM_CLEAR 254
$define KEY_CODES_COUNT 255






'MOUSE
$define MOUSE_LEFT 0
$define MOUSE_MIDDLE 1
$define MOUSE_RIGHT 2

Enum PHYSIC_QUALITY
	Q_LINEAR = 0
	Q_ADAPTATIVE
	Q_EXACT
EndEnum

Enum CHIL_UPDATE_MODE
	C_NONE = 0
	C_READ
	C_CONTROL
	C_COUNT
EndEnum

Enum LIGHT_TYPE
	LGT_POINT = 0
	LGT_SPOT
	LGT_DIRECTIONAL
EndEnum

Enum MATERIAL_FLAG
	MF_WIREFRAME = 0
	MF_POINTCLOUD
	MF_FLAT
	MF_FULLBRITGH
	MF_ZBUFFER
	MF_ZWRITER
	MF_BACKFACE
	MF_FRONTFACE
	MF_FOG
	MF_NORMALIZE
EndEnum

Enum MATERIAL_TYPE
	MT_SOLID = 0
	MT_LIGHT_MAP
	MT_DETAIL_MAP
	MT_SPHERE_MAP
	MT_REFLECTION
	MT_TRANSPARENT_ADD
	MT_TRANSPARENT
	MT_NORMAL_MAP
	MT_PARALLAX_MAP
EndEnum


Enum VERTEX_TYPE
	VT_TCOORS = 0
	VT_TANGENTS
EndEnum

Enum MODE_UP
	UP_ALL = 0
	UP_GRAPHICS
	UP_PHYSICS
	UP_SOUNDS
EndEnum

Enum IRR_TERRAIN_PATCH_SIZE
    ETPS_9 = 9                    ' patch size of 9, at most, use 4 levels of detail with this patch size.  
    ETPS_17 = 17                  ' patch size of 17, at most, use 5 levels of detail with this patch size.  
    ETPS_33 = 33                  ' patch size of 33, at most, use 6 levels of detail with this patch size.  
    ETPS_65 = 65                  ' patch size of 65, at most, use 7 levels of detail with this patch size.  
    ETPS_129 = 129                ' patch size of 129, at most, use 8 levels of detail with this patch size. 
EndEnum

'/--------------------------------|
'[GRAPHICS                        ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, Transparency  Alias "Transparency" ( Level As uint)
Declare CDECL Import, Colors  Alias "Colors" ( Red As uint, Green As uint, Blue As uint)
Declare CDECL Import, Line2D  Alias "Line2D" ( x1 As Int, y1 As Int, x2 As Int, y2 As Int)
Declare CDECL Import, Line3D  Alias "Line3D" ( x1 As Float, y1 As Float, z1 As Float, x2 As Float, y2 As Float, z2 As Float, thickness As Float, Alpha As uint, Red As uint, Green As uint, Blue As uint)
Declare CDECL Import, Rect2D  Alias "Rect2D" ( x As Int, y As Int, widht As Int, height As Int)
Declare CDECL Import, Pixel  Alias "Pixel" ( x As Int, y As Int)
Declare CDECL Import, Image  Alias "Image" ( texture As nTEXTURE, x As Int, y As Int)
Declare CDECL Import, Oval  Alias "Oval" ( x As Int, y As Int, Radius As Float)
Declare CDECL Import, ImageSprites2D  Alias "ImageSprites2D" ( texture As nTEXTURE, x As Int, y As Int, TX As Int, TY As Int,_
 BX As Int, BY As Int)


'/--------------------------------|
'[INPUT                           ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, nKeyDown  Alias "KeyDown" ( keystate As Int), Int
Declare CDECL Import, KeyHit    Alias "KeyHit" ( keystate As Int), Int

Declare CDECL Import, MouseHit    Alias "MouseHit" ( keystate As Int), Int
Declare CDECL Import, nMouseDown  Alias "MouseDown" ( keystate As Int), Int
Declare CDECL Import, MoveMouse   Alias "MoveMouse" ( x As Int, y As Int)

Declare CDECL Import, MouseWheel  Alias "MouseWheel" (), Int
Declare CDECL Import, nMouseX     Alias "MouseX" (), Int
Declare CDECL Import, nMouseY     Alias "MouseY" (), Int

Declare CDECL Import, ShowMouse  Alias "ShowMouse" ()
Declare CDECL Import, HideMouse  Alias "HideMouse" ()

'/--------------------------------|
'[_file                            ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, ChangeDirectory  Alias "ChangeDirectory" ( _file As I)
Declare CDECL Import, Exist_file  Alias "Exist_file" ( _file as String), Int
Declare CDECL Import, LoadZip  Alias "LoadZip" ( _file as String)
Declare CDECL Import, LoadScene  Alias "nLoadScene" ( _file as String), nMesh
Declare CDECL Import, SaveScene  Alias "nSaveScene" ( _file as String)


'dont use!!!
'Declare CDECL Import, CreateOpen_file  Alias "CreateOpen_file" ( _file as String), nREAD
'Declare CDECL Import, ReadCHAR  Alias "ReadCHAR" ( _file As nREAD), String
'Declare CDECL Import, ReadFLOAT  Alias "ReadFLOAT" ( _file As nREAD), S
'Declare CDECL Import, ReadINT  Alias "ReadINT" ( _file As nREAD), I
'Declare CDECL Import, CloseRead  Alias "CloseRead" ( _file As nREAD)

'Declare CDECL Import, CreateWrite_file  Alias "CreateWrite_file" ( _file as String), nWRITE
'Declare CDECL Import, WriteCHAR  Alias "WriteCHAR" ( _file As nWRITE, c as String)
'Declare CDECL Import, WriteFLOAT  Alias "WriteFLOAT" ( _file As nWRITE, f As Float)
'Declare CDECL Import, WriteINT  Alias "WriteINT" ( _file As nWRITE, i As Int ptr)
'Declare CDECL Import, CloseWrite  Alias "CloseWrite" ( _file As nWRITE)





'/--------------------------------|
'[GRASS                        ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\----------------------------------------------------


Declare CDECL Import, AddGrass  alias "nAddGrass"( terrain as nTerrain,_
 x as Int, z as Int, patchSize as Int, grassScale as Float,_
 maxDensity as uint, dataPozitionX as Int, dataPozitionY as Int,_
 heightMap as nImage, textureMap as nImage, grassMap as nImage, grassTexture as nTexture), nGrass

Declare CDECL Import, SetGrassDensity  alias "nSetGrassDensity"( grass as nGrass, density as Int, distance as Float)
Declare CDECL Import, SetGrassWind  alias "nSetGrassWind"( grass as nGrass, strength as Float, regularity as Float)
Declare CDECL Import, GetGrassDrawCount  alias "nGetGrassDrawCount"( grass as nGrass), uint

'/--------------------------------|
'[CLOUDS                       ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\----------------------------------------------------

Declare CDECL Import, CreateClouds  alias "nAddClouds"( texture As nTEXTURE, lod as uint,  depth as uint,  density as uint), uint

'/--------------------------------|
'[LENS FLARE                       ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\----------------------------------------------------

Declare CDECL Import, CreateLensFlareNode  alias "nAddLensFlare"( texture As nTEXTURE), uint
Declare CDECL Import, setLensFlareScale  alias "nSetFlareScale"( flare as nLensFlare, source as Float, optics as Float)

'/--------------------------------|
'[TEXT                            ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, LoadFont  Alias "LoadFont" ( _file as String), nFONT
Declare CDECL Import, Font  Alias "Font" ( Font As nFONT)
Declare CDECL Import, Text  Alias "Text" ( x As Int, y As Int, txt as String, OPT cenx=0 As Int, OPT ceny=0  As Int)

'/--------------------------------|
'[PARTICLES                       ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

'Particles
Declare CDECL Import, CreateParticle  Alias "CreateParticle" (), nPARTICLE
Declare CDECL Import, ParticleEndSize  Alias "ParticleEndSize" ( Particle As nPARTICLE, sx As Float, sy As Float)
Declare CDECL Import, ParticleGravity  Alias "ParticleGravity" ( Particle As nPARTICLE, gx As S, gy As S, gz As S)

'Global emitter SUBs
Declare CDECL Import, EmitterDirection  Alias "EmitterDirection" ( emitter As nEMITTER, dx As S, dy As S, dz As S)
Declare CDECL Import, EmitterPPS  Alias "EmitterPPS" ( emitter As nEMITTER, minpps As I, maxpps As I)
Declare CDECL Import, EmitterStartColor  Alias "EmitterStartColor" ( emitter As nEMITTER, mir As I, mig As I, mib As I, mar As I, mag As I, mab As I)
Declare CDECL Import, EmitterStartSize  Alias "EmitterStartSize" ( emitter As nEMITTER, mix As I, miy As I, max As I, may As I)

'Box Emitter
Declare CDECL Import, CreateBoxEmitter  Alias "CreateBoxEmitter" ( Particle As nPARTICLE, minv As uint, maxv As uint), nEMITTER
Declare CDECL Import, BoxEmitterSize  Alias "BoxEmitterSize" ( emitter As nEMITTER, sx As Float, sy As Float, sz As Float)

'Cylinder Emitter
Declare CDECL Import, CreateCylinderEmitter  Alias "CreateCylinderEmitter" ( Particle As nPARTICLE, minv As uint, maxv As uint), nEMITTER
Declare CDECL Import, CylinderEmitterCenter  Alias "CylinderEmitterCenter" ( emitter As nEMITTER, x As Float, y As Float, z As Float)
Declare CDECL Import, CylinderEmitterRadius  Alias "CylinderEmitterRadius" ( emitter As nEMITTER, radius As Float)
Declare CDECL Import, CylinderEmitterLength  Alias "CylinderEmitterLength" ( emitter As nEMITTER, length As Float)

'Mesh Emitter
Declare CDECL Import, CreateMeshEmitter  Alias "CreateMeshEmitter" ( Particles As nPARTICLE, minv As uint, maxv As uint), nEMITTER
Declare CDECL Import, MeshEmitterMesh  Alias "MeshEmitterMesh" ( emitter As nEMITTER, Mesh As nMESH)
Declare CDECL Import, MeshEmitterEveryVertex  Alias "MeshEmitterEveryVertex" ( emitter As nEMITTER, EveryMeshVertex As I)

'Ring Emitter
Declare CDECL Import, CreateRingEmitter  Alias "CreateRingEmitter" ( Particle As nPARTICLE, Min As UI, Max As UI), nEMITTER
Declare CDECL Import, RingEmitterCenter  Alias "RingEmitterCenter" ( emitter As nEMITTER, X As S, Y As S, Z As S)
Declare CDECL Import, RingEmitterRadius  Alias "RingEmitterRadius" ( emitter As nEMITTER, Radius As S)
Declare CDECL Import, RingEmitterThickness  Alias "RingEmitterThickness" ( emitter As nEMITTER, Thickness As S)

'/--------------------------------|
'[MATERIALS                       ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

'For meshes
Declare CDECL Import, MaterialType  Alias "MaterialType" ( entity As nENTITY, num As uint, t As MATERIAL_TYPE)
Declare CDECL Import, MaterialFlag  Alias "MaterialFlag" ( entity As nENTITY, num As uint, flag As MATERIAL_FLAG, mode As Int)
Declare CDECL Import, MaterialTexture  Alias "MaterialTexture" ( entity As nENTITY, num As uint, texture As nTEXTURE, index As uint)
Declare CDECL Import, MaterialColor  Alias "MaterialColor" ( entity As nENTITY, num As uint, red As uint, green As uint, blue As uint)
Declare CDECL Import, MaterialEmissiveColor  Alias "MaterialColor" ( entity As nENTITY, num As uint, red As uint, green As uint, blue As uint)
Declare CDECL Import, MaterialShininess  Alias "MaterialShininess" ( entity As nENTITY, num As uint, shininess As Float)
Declare CDECL Import, MaterialAlpha  Alias "MaterialAlpha" ( entity As nENTITY, num As uint, level As UI)
Declare CDECL Import, MaterialTextureUV  Alias "MaterialTextureUV" ( entity As nENTITY, num As uint, index As UI, u As S, v As S)
Declare CDECL Import, MaterialTextureAngle  Alias "MaterialTextureAngle" ( entity As nENTITY, num As uint, index As UI, angle As S)
Declare CDECL Import, MaterialTextureScale  Alias "MaterialTextureScale" ( entity As nENTITY, num As uint, index As UI, sx As S, sy As S)
Declare CDECL Import, MaterialCount  Alias "MaterialCount"(  entity As 	nENTITY), uint

'For Bodies
Declare CDECL Import, CreateMaterial  Alias "CreateMaterial" (), nMATERIAL
Declare CDECL Import, BodyMaterial  Alias"BodyMaterial" ( Body As nBODY,  material as nMATERIAL)
Declare CDECL Import, MaterialElasticity  Alias "MaterialElasticity" ( material1 As nMATERIAL, material2 As nMATERIAL, elasticity As Float)
Declare CDECL Import, MaterialFriction  Alias "MaterialFriction" ( material1 As nMATERIAL, material2 As nMATERIAL, sfriction As Float, kfriction As Float)
Declare CDECL Import, MaterialSoftness  Alias "MaterialSoftness" ( material1 As nMATERIAL, material2 As nMATERIAL, softness As Float)
Declare CDECL Import, MaterialCollidable  Alias "MaterialCollidable" ( material1 As nMATERIAL, material2 As nMATERIAL, mode As Int)

'/--------------------------------|
'[CAMERA                          ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

'Fader
Declare CDECL Import, FadeIn  Alias "FadeIn" ( t As uint)
Declare CDECL Import, FadeOut  Alias "FadeOut" ( t As uint)
Declare CDECL Import, FaderColor  Alias "FaderColor" ( r As uint, g As uint, b As uint)
Declare CDECL Import, FadeIsReady  Alias "FadeIsReady"( ), Int 

'Camera
Declare CDECL Import, CreateCamera  Alias "CreateCamera" (), nCAMERA
Declare CDECL Import, CreateCameraFPS  Alias "CreateCameraFPS" ( rots As S, movs As S), nCAMERA
Declare CDECL Import, CreateCameraMaya  Alias "CreateCameraMaya" ( rots As S, zoos As S, movs As S), nCAMERA
Declare CDECL Import, CreateCameraIsometric  Alias "CreateCameraIsometric" ( Width As Float, height As Float, near As Float, far As Float), nCAMERA
Declare CDECL Import, CameraPick  Alias "CameraPick"( x As Int, y As Int ), nENTITY 

Declare CDECL Import, CameraFOV  Alias "CameraFOV" ( camera As nCAMERA, ratio As S)
Declare CDECL Import, CameraRange  Alias "CameraRange" ( camera As nCAMERA, near As S, far As S)
Declare CDECL Import, CameraTarget  Alias "CameraTarget" ( camera As nCAMERA, tx As S, ty As S, tz As S)
Declare CDECL Import, ActiveCamera  Alias "ActiveCamera" ( camera As nCAMERA)
Declare CDECL Import, CameraViewPort  Alias "CameraViewPort" ( width As I, height As I)
Declare CDECL Import, CameraAspectRatio  Alias "CameraAspectRatio" ( camera As nCAMERA, aspect As S)

Declare CDECL Import, TargetX  Alias "TargetX" ( camera As nCAMERA), Float
Declare CDECL Import, TargetY  Alias "TargetY" ( camera As nCAMERA), Float
Declare CDECL Import, TargetZ  Alias "TargetZ" ( camera As nCAMERA), Float

Declare CDECL Import, ViewPortWidth  Alias "ViewPortWidth" (), I
Declare CDECL Import, ViewPortHeight  Alias "ViewPortHeight" (), I

'/--------------------------------|
'[LIGHT                           ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, CreateLight  Alias "CreateLight" ( mode As LIGHT_TYPE), nLIGHT
Declare CDECL Import, LightRadius  Alias "LightRadius" ( light As nLIGHT, radius As Float)
Declare CDECL Import, LightCastShadow  Alias "LightCastShadow" ( light As nLIGHT)
Declare CDECL Import, LightColor  Alias "LightColor" ( light As nLIGHT, red As uint, green As uint, blue As uint)
Declare CDECL Import, LightFalloff  Alias "LightFalloff" ( light As nLIGHT, falloff As S)
Declare CDECL Import, LightConeAngles  Alias "LightConeAngles" ( light As nLIGHT, Inner As Float, Outer As Float)
Declare CDECL Import, LightAttenuation  Alias "LightAttenuation" ( light As nLIGHT, c As Float, l As Float, q As Float)
Declare CDECL Import, LightDirection  Alias "LightDirection" ( light As nLIGHT, x As Float, y As Float, z As Float)

'/--------------------------------|
'[MESH                            ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, CreateMeshNull  Alias "CreateMeshNull" (), nMESH
Declare CDECL Import, CreateMeshCube  Alias "CreateMeshCube" (), nMESH
Declare CDECL Import, CreateMeshSphere  Alias "CreateMeshSphere" ( polycount As uint), nMESH
Declare CDECL Import, CreateMeshCylinder  Alias "CreateMeshCylinder" ( polycount As uint), nMESH
Declare CDECL Import, CreateMeshCone  Alias "CreateMeshCone" ( polycount As uint), nMESH
Declare CDECL Import, CreateMeshPlane  Alias "CreateMeshPlane" ( size As Float, tileCount As uint), nMESH
Declare CDECL Import, CreateMeshWater  Alias "CreateMeshWater" ( height As Float, speed As Float, length As Float), nENTITY

Declare CDECL Import, LoadMesh  Alias "LoadMesh" ( _file as String, OPT toTangents = VT_TCOORS As VERTEX_TYPE), nBSPNode
Declare CDECL Import, MeshCastShadow  Alias "MeshCastShadow" ( mesh As nMESH)
Declare CDECL Import, OutlineMesh  Alias "OutlineMesh" ( mesh As nMESH, w As Float, r As uint, g As uint, b As uint)
Declare CDECL Import, ScaleMesh  Alias "ScaleMesh" ( mesh As nMESH, scax As Float, scay As Float, scaz As Float)
Declare CDECL Import, AnimateMesh  Alias "AnimateMesh" ( mesh As nMESH, looped As I, speed As Float, b As Int, e As Int, t As Float)
Declare CDECL Import, MeshesCollide  Alias "MeshesCollide" ( mesh1 As nMESH, mesh2 As nMESH), Int
Declare CDECL Import, VertexCount  Alias "VertexCount" ( mesh As nMESH), uint
Declare CDECL Import, CurrentFrame  Alias "CurrentFrame" ( mesh As nMESH), Int

Declare CDECL Import, CountChildren  Alias "CountChildren" ( mesh As nMESH), uint
Declare CDECL Import, FindChild  Alias "FindChild" ( mesh As nMESH, nameChild as String), nCHILD
Declare CDECL Import, ChildName  Alias "ChildName" ( child As nCHILD), String
Declare CDECL Import, ChildMode  Alias "ChildMode" ( mesh As nMESH, mode As Int)

'/--------------------------------|
'[TERRAIN                         ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, LoadTerrain  alias "LoadTerrain" ( _
         path as String, _
         OPT xPosition = 0.0f as Float, _
         OPT yPosition = 0.0f as Float, _
         OPT zPosition = 0.0f as Float, _
         OPT xRotation = 0.0f as Float, _
         OPT yRotation = 0.0f as Float, _
         OPT zRotation = 0.0f as Float, _
         OPT xScale = 1.0f as Float, _
         OPT yScale = 1.0f as Float, _
         OPT zScale = 1.0f as Float, _
         OPT vertexAlpha = 255 as Int, _
         OPT vertexRed = 255 as Int, _
         OPT vertexGreen = 255 as Int, _
         OPT vertexBlue = 255 as Int, _
         OPT smoothing=4 as Int, _
         OPT maxLOD=5 as Int, _
         OPT patchSize = ETPS_17 as IRR_TERRAIN_PATCH_SIZE ), nterrain


Declare CDECL Import, ScaleTexture  Alias "ScaleTexture" ( terrain As nENTITY, sx As S, sy As S)
Declare CDECL Import, TerrainHeight  Alias "TerrainHeight" ( terrain As nENTITY, x As S, z As S), S

'/--------------------------------|
'[MISC                            ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

'Sky
Declare CDECL Import, CreateSkyDome  Alias "CreateSkyDome" ( texture As nTEXTURE, radius as Float), nENTITY
Declare CDECL Import, CreateSkyBox  Alias "CreateSkyBox" ( tp As nTEXTURE, bt As nTEXTURE, lf As nTEXTURE, rg As nTEXTURE, ft As nTEXTURE, bk As nTEXTURE), nENTITY

'/--------------------------------|
'[MATHS                           ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, WrapValue  Alias "WrapValue" ( newvalue As S, oldvalue As S, increment As S), S
Declare CDECL Import, CurveValue  Alias "CurveValue" ( newvalue As S, oldvalue As S, increment As S), S
Declare CDECL Import, Distance2D  Alias "Distance2D" ( x1 As S, y1 As S, x2 As S, y2 As S), S
Declare CDECL Import, Distance3D  Alias "Distance3D" ( x1 As S, y1 As S, z1 As S, x2 As S, y2 As S, z2 As S), S
Declare CDECL Import, Min  Alias "Min" ( value1 As S, value2 As S), S
Declare CDECL Import, Max  Alias "Max" ( value1 As S, value2 As S), S
Declare CDECL Import, nRand  Alias "Rand" ( value1 As I, value2 As I), I

'/--------------------------------|
'[TEXTURE                         ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, LoadTexture  Alias "LoadTexture" ( _filename as String), nTEXTURE
Declare CDECL Import, CreateRTT  Alias "CreateRTT" ( sx As I, sy As I), nTEXTURE
Declare CDECL Import, RenderTarget  Alias "RenderTarget" ( texture As nTEXTURE)
Declare CDECL Import, ColorKeyTexture  Alias "ColorKeyTexture" ( texture As nTEXTURE, red As UI, green As UI, blue As UI)
Declare CDECL Import, FindTexture  Alias "FindTexture" ( n as String), nTEXTURE
Declare CDECL Import, TextureWidth  Alias "TextureWidth" ( texture As nTEXTURE), I
Declare CDECL Import, TextureHeight  Alias "TextureHeight" ( texture As nTEXTURE), I
Declare CDECL Import, LockTexture  Alias "LockTexture" ( texture As nTEXTURE), uint
Declare CDECL Import, UnLockTexture  Alias "LockTexture" ( texture As nTEXTURE)
Declare CDECL Import, LoadImageFrom_file  alias "nGetImage"( _filename as  string), nImage


'/--------------------------------|
'[SOUND                           ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, LoadSound  Alias "LoadSound" ( _file as String), nSOUND
Declare CDECL Import, SoundType  Alias "SoundType" ( sound As nSOUND, mode As I)
Declare CDECL Import, VolumeSound  Alias "VolumeSound" ( sound As nSOUND, volume as Float)
Declare CDECL Import, PitchSound  Alias "PitchSound" ( sound As nSOUND, pitch as Float)
Declare CDECL Import, PlaySound  Alias "PlaySound" ( sound As nSOUND)
Declare CDECL Import, StopSound  Alias "StopSound" ( sound As nSOUND)
Declare CDECL Import, PauseSound  Alias "PauseSound" ( sound As nSOUND)
Declare CDECL Import, LoopSound  Alias "LoopSound" ( sound As nSOUND)
Declare CDECL Import, SoundReferenceDistance  Alias "SoundReferenceDistance" ( sound As nSOUND, value As S)
Declare CDECL Import, SoundRollOff  Alias "SoundRollOff" ( sound As nSOUND, value As S)

'/--------------------------------|
'[SPRITE                          ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, nLoadSprite  Alias "LoadSprite" ( _fileName as String), nSPRITE
Declare CDECL Import, ScaleSprite  Alias "ScaleSprite" ( sprite As nSPRITE, sx As Float, sy As Float)
Declare CDECL Import, SpriteColor  Alias "SpriteColor" ( sprite As nSPRITE, red As uint, green As uint, blue As uint)

'/--------------------------------|
'[SHADERS                         ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, LoadShader  Alias "LoadShader" ( V_fileName as String, P_fileName as String), nSHADER
Declare CDECL Import, ApplyShadersEntity  Alias "ApplyShadersEntity" ( Shader As nSHADER, Entity As nENTITY)
Declare CDECL Import, ApplyShadersMaterial  Alias "ApplyShadersMaterial" ( Shader As nSHADER, Entity As nENTITY, Num As uint)
Declare CDECL Import, VertexShaderConstant  Alias "VertexShaderConstant" ( Shader As nSHADER, FName as String, CData As Float,  Count As Int)
Declare CDECL Import, PixelShaderConstant  Alias "PixelShaderConstant" ( Shader As nSHADER, FName as String, CData As Float,  Count As Int)



'/--------------------------------|
'[CONTROL                         ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, DeleteEntity  Alias "DeleteEntity" ( Entity As nENTITY)
Declare CDECL Import, ShowEntity  Alias "ShowEntity" ( Entity As nENTITY)
Declare CDECL Import, HideEntity  Alias "HideEntity" ( Entity As nENTITY)
Declare CDECL Import, NameEntity  Alias "NameEntity" ( Entity As nENTITY, namemesh as String)
Declare CDECL Import, EntityParent  Alias "EntityParent" ( entity As nENTITY, Parent As nENTITY)
Declare CDECL Import, EntityTexture  Alias "EntityTexture" ( Entity As nENTITY, Texture As nTEXTURE, Index As uint)
Declare CDECL Import, EntityColor  Alias "EntityColor" ( Entity As nENTITY, Red As uint, Green As uint, Blue As uint)
Declare CDECL Import, EntityShininess  Alias "EntityShininess" ( Entity As nENTITY, shininess As Float)
Declare CDECL Import, EntityAlpha  Alias "EntityAlpha" ( Entity As nENTITY, level As uint)
Declare CDECL Import, EntityType  Alias "EntityType" ( Entity As nENTITY, t As MATERIAL_TYPE)
Declare CDECL Import, EntityFlag  Alias "EntityFlag" ( Entity As nENTITY, Flag As MATERIAL_FLAG, Mode As Int)
Declare CDECL Import, CopyEntity  Alias "CopyEntity" ( Entity As nENTITY), nENTITY

'/--------------------------------|
'[MOVEMENT                        ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, PositionEntity  Alias "PositionEntity" ( entity As nENTITY, x As Float, y As Float, z As Float)
Declare CDECL Import, RotateEntity  Alias "RotateEntity" ( entity As nENTITY, x As Float, y As Float, z As Float)
Declare CDECL Import, TurnEntity  Alias "TurnEntity" ( entity As nENTITY, x As Float, y As Float, z As Float)
Declare CDECL Import, MoveEntity  Alias "MoveEntity" ( entity As nENTITY, x As Float, y As Float, z As Float)
Declare CDECL Import, PointEntity  Alias "PointEntity" ( entity1 As nENTITY, entity2 As nENTITY)

'/--------------------------------|
'[STATE                           ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, EntityX  Alias "EntityX" ( entity As nENTITY), Float
Declare CDECL Import, EntityY  Alias "EntityY" ( entity As nENTITY), Float
Declare CDECL Import, EntityZ  Alias "EntityZ" ( entity As nENTITY), Float
Declare CDECL Import, EntityPitch  Alias "EntityPitch" ( entity As nENTITY), Float
Declare CDECL Import, EntityYaw  Alias "EntityYaw" ( entity As nENTITY), Float
Declare CDECL Import, EntityRoll  Alias "EntityRoll" ( entity As nENTITY), Float
Declare CDECL Import, EntityName  Alias "EntityName" ( entity As nENTITY), String
Declare CDECL Import, LinePick  Alias " LinePick "( X1 As Float,  Y1 As Float, Z1 As Float,_
     X2 As Float, Y2 As Float, Z2 As Float), nENTITY
Declare CDECL Import, EntityDistance  Alias "EntityDistance"( entity1 As nENTITY, entity2 As nENTITY), Float 


'/--------------------------------|
'[PHYSIC                          ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

'WORLD
Declare CDECL Import, PhysicQuality  Alias "PhysicQuality" ( mode As PHYSIC_QUALITY)
Declare CDECL Import, WorldGravity  Alias "WorldGravity" ( GX As S, GY As S, GZ As S)
Declare CDECL Import, WorldSize  Alias "WorldSize" ( X As S, Y As S, state As S)
Declare CDECL Import, WorldMousePick  Alias "WorldMousePick" ( X As I, Y As I, Z As I)


'Body
Declare CDECL Import, CreateBodyNull  Alias "CreateBodyNull" (), nBODY
Declare CDECL Import, CreateBodyCube  Alias "CreateBodyCube" ( SX As Float, SY As Float, SZ As Float, Mass As Float), nBODY
Declare CDECL Import, CreateBodySphere  Alias "CreateBodySphere" ( SX As Float, SY As Float, SZ As Float, Mass As Float), nBODY
Declare CDECL Import, CreateBodyCylinder  Alias "CreateBodyCylinder" ( Radius As Float, Height As Float, Mass As Float, OPT Offset=1 As Int), nBODY
Declare CDECL Import, CreateBodyCone  Alias "CreateBodyCone" ( Radius As Float, Height As Float, Mass As Float, OPT Offset=1 As Int), nBODY
Declare CDECL Import, CreateBodyCapsule  Alias "CreateBodyCapsule" ( Radius As Float, Height As Float, Mass As Float, OPT Offset = 1 As Int), nBODY

Declare CDECL Import, CreateBodyHull  Alias "CreateBodyHull" ( Mesh As nMESH, mass As Float), nBODY
Declare CDECL Import, CreateBodyTree  Alias "CreateBodyTree" ( Mesh As nMESH, mass As Float), nBODY
Declare CDECL Import, CreateBodyTreeBSP  Alias "CreateBodyTreeBSP"( Mesh As uint, Node As uint), nBODY
Declare CDECL Import, CreateBodyTerrain  Alias "CreateBodyTerrain" ( terrain As nTERRAIN, LOD As Int), nBODY
Declare CDECL Import, CreateBodyWater  Alias "CreateBodyWater" ( SX As Float, SY As Float, SZ As Float, fluidDensity As Float, linearViscosity As Float, angularViscosity As Float), nBODY

Declare CDECL Import, AngularVelocity  Alias "AngularVelocity" ( Body As nBODY, VX As S, VY As S, VZ As S)
Declare CDECL Import, LinearVelocity  Alias "LinearVelocity" ( Body As nBODY, VX As S, VY As S, VZ As S)

Declare CDECL Import, LinearDamping  Alias "LinearDamping" ( Body As nBODY, Damping As S)
Declare CDECL Import, AngularDamping  Alias "AngularDamping" ( Body As nBODY, ax As S, ay As S, az As S)
Declare CDECL Import, AddImpulse  Alias "AddImpulse" ( Body As nBODY, PX As S, PY As S, PZ As S, VX As S, VY As S, VZ As S)

Declare CDECL Import, BodiesCollide  Alias "BodiesCollide" ( body1 As nBODY, body2 As nBODY), Int


Declare CDECL Import, BodyCollX  Alias "BodyCollX" ( body1 As nBODY, body2 As nBODY), Float
Declare CDECL Import, BodyCollY  Alias "BodyCollY" ( body1 As nBODY, body2 As nBODY), Float
Declare CDECL Import, BodyCollZ  Alias "BodyCollZ" ( body1 As nBODY, body2 As nBODY), Float

Declare CDECL Import, BodyCollNX  Alias "BodyCollNX" ( body1 As nBODY, body2 As nBODY), Float
Declare CDECL Import, BodyCollNY  Alias "BodyCollNY" ( body1 As nBODY, body2 As nBODY), Float
Declare CDECL Import, BodyCollNZ  Alias "BodyCollNZ" ( body1 As nBODY, body2 As nBODY), Float

Declare CDECL Import, DrawBody  Alias "DrawBody" ( body As nBODY)

'Joint
Declare CDECL Import, CreateJointBall  Alias "CreateJointBall" ( px As Float, py As Float, pz As Float, dx As Float, dy As Float, dz As Float, body1 As nBODY, body2 As nBODY), nJOINT
Declare CDECL Import, CreateJointHinge  Alias "CreateJointHinge" ( px As Float, py As Float, pz As Float, dx As Float, dy As Float, dz As Float, body1 As nBODY, body2 As nBODY), nJOINT
Declare CDECL Import, CreateJointSlider  Alias "CreateJointSlider" ( px As Float, py As Float, pz As Float, dx As Float, dy As Float, dz As Float, body1 As nBODY, body2 As nBODY), nJOINT
Declare CDECL Import, CreateJointUpVector  Alias "CreateJointUpVector" ( px As Float, py As Float, pz As Float, body1 As nBODY), nJOINT
Declare CDECL Import, CreateJointCorkscrew  Alias "CreateJointCorkscrew" ( px As Float, py As Float, pz As Float, dx As Float, dy As Float, dz As Float, body1 As nBODY, body2 As nBODY), nJOINT

'Declare CDECL Import, JointStiffness  Alias "JointStiffness" ( joint As nJOINT, stiffness As Double)
Declare CDECL Import, JointCollisionState  Alias "JointCollisionState" ( joint As nJOINT, state As Int)
Declare CDECL Import, BallLimits  Alias "BallLimits" ( joint As nJOINT, maxconeangle As Float, mintwistangle As Float, maxtwistangle As Float)
Declare CDECL Import, HingeLimits  Alias "HingeLimits" ( joint As nJOINT, minAngle As Float, maxAngle As Float)
Declare CDECL Import, SliderLimits  Alias "SliderLimits" ( joint As nJOINT, minAngle As Float, maxAngle As Float)
Declare CDECL Import, CorkScrewLinearLimits  Alias "CorkScrewLinearLimits" ( joint As nJOINT, minDist As Float, maxDist As Float)
Declare CDECL Import, CorkScrewAngularLimits  Alias "CorkScrewAngularLimits" ( joint As nJOINT, minDist As Float, maxDist As Float)

'Vehicle
Declare CDECL Import, CreateVehicle  Alias "CreateVehicle" ( x As Float, y As Float, z As Float, body1 As nBODY), nJOINT
Declare CDECL Import, VehicleSpeed  Alias "VehicleSpeed" ( joint As nJOINT), Float
Declare CDECL Import, AddTire  Alias "AddTire" ( joint As nJOINT, ud As nENTITY, x As Float, y As Float, z As Float, mass As Float, r As Float, w As Float, f As Float, sl As Float, sc As Float, sd As Float)
Declare CDECL Import, ApplyBrake  Alias "ApplyBrake" ( joint As nJOINT, wheel As Int, brake As Float)
Declare CDECL Import, ApplySteering  Alias "ApplySteering" ( joint As nJOINT, wheel As Int, vrate As Float)
Declare CDECL Import, ApplyTorque  Alias "ApplyTorque" ( joint As nJOINT, wheel As Int, torque As Float)

'/--------------------------------|
'[TIME                            ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, TimeStart  Alias "TimeStart" ()
Declare CDECL Import, TimeStop  Alias "TimeStop" ()
Declare CDECL Import, TimeSpeed  Alias "TimeSpeed" ( speed As Float)
Declare CDECL Import, GetTime  Alias "GetTime" (), uint
Declare CDECL Import, GetRealTime  Alias "GetRealTime" (), uint

'/--------------------------------|
'[SYSTEM                          ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, AppTitle  Alias "AppTitle" ( t as String)
Declare CDECL Import, SupportGLSL  Alias "SupportGLSL" (), Int
Declare CDECL Import, SupportHardwareTL  Alias "SupportHardwareTL" (), Int
Declare CDECL Import, AvailableMemory  Alias "AvailableMemory" (), uint
Declare CDECL Import, TotalMemory  Alias "TotalMemory" (), uint
Declare CDECL Import, VideoModeCount  Alias "VideoModeCount" (), Int
Declare CDECL Import, VideoModeDepth  Alias "VideoModeDepth" (), Int
Declare CDECL Import, VideoModeResolutionWidth  Alias "VideoModeResolutionWidth" (), Int
Declare CDECL Import, VideoModeResolutionHeight  Alias "VideoModeResolutionHeight" (), Int
Declare CDECL Import, SupportStencilBuffer  Alias "SupportStencilBuffer"(), Int
Declare CDECL Import, SupportMultiTexture  Alias "SupportMultiTexture"(), Int
Declare CDECL Import, SupportARB  Alias "SupportARB"(), Int
Declare CDECL Import, ProcessorSpeed  Alias "ProcessorSpeed"(), uint


'/--------------------------------|
'[GLOBAL                          ]>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
'\-----------------------------------------------------------------------------------------------/

Declare CDECL Import, BackGroundColor  Alias "BackGroundColor" ( r As uint, g As uint, b As uint)
Declare CDECL Import, AmbientLight  Alias "AmbientLight" ( r As uint, g As uint, b As uint)
Declare CDECL Import, ShadowColor  Alias "ShadowColor" ( r As uint, g As uint, b As uint, a As uint)

Declare CDECL Import, Fog  Alias "Fog" ( r As uint, g As uint, b As uint, Density As Float)

Declare CDECL Import, ScreenShot  Alias "ScreenShot" ()

Declare CDECL Import, InitEngine  Alias "InitEngine" ( X As Int, Y As Int, bits As Int, mode As Int)
Declare CDECL Import, EngineRun  Alias "EngineRun" (), Int
Declare CDECL Import, UpdateEngine  Alias "UpdateEngine" ( TimeStep As Float, OPT mode = UP_ALL As MODE_UP)
Declare CDECL Import, CloseEngine  Alias "CloseEngine" ()
Declare CDECL Import, EndEngine  Alias "EndEngine" ()

Declare CDECL Import, Collisions  Alias "Collisions" ( mesh As nMESH, entity As nENTITY, mode As I,_
         OPT SX = 3.0f AS Float, OPT SY=3.0f AS Float, OPT SZ= 3.0f AS Float,_
         OPT GX=0.0f AS Float, OPT GY=-1.0f AS Float, OPT GZ=0.0f AS Float,_
         OPT OFFX=0.0f AS Float, OPT OFFY=3.0f AS Float, OPT OFFZ=0.0f AS Float)

Declare CDECL Import, EnableAntialias  Alias "EnableAntialias" ()
Declare CDECL Import, EnableVsync  Alias "EnableVsync" ()

Declare CDECL Import, BeginScene  Alias "BeginScene" ()
Declare CDECL Import, EndScene  Alias "EndScene" ()

Declare CDECL Import, Fps  Alias "Fps" (), Float'Integer
Declare CDECL Import, TrisRendered  Alias "TrisRendered" (), uint

Declare CDECL Import, LightCount  Alias "LightCount" (), UI
Declare CDECL Import, PrimitiveCount  Alias "PrimitiveCount" (), I
Declare CDECL Import, BodyCount  Alias "BodyCount" (), I


'BSP

Declare CDECL Import, LoadMeshBSP  alias LoadMeshBSP (  path as String ), uint
Declare CDECL Import, CreateNodeBSPfromMeshBSP  alias "CreateNodeBSPfromMeshBSP" ( mesh as uint), uint
Declare CDECL Import, StaticCollisionsBSP  Alias "StaticCollisionsBSP" ( meshBSP As nMESH, nodeBSP As nMESH, entity As nENTITY,_
         OPT SX=10.0f AS Float, OPT SY=10.0f AS Float, OPT SZ = 10.0f AS Float,_
         OPT GX=0.0f AS Float, OPT GY=-100.0f AS Float, OPT GZ=0.0f AS Float,_
         OPT OFFX=0.0f AS Float, OPT OFFY=50.0f AS Float, OPT OFFZ=0.0f AS Float)


'GUI
Declare CDECL Import, CreateGUIMessageBox(caption as string, flags as int, parent as int)  ', MBox



