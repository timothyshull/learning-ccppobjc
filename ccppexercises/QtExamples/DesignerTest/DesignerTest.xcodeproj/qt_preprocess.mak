#############################################################################
# Makefile for building: DesignerTest.app/Contents/MacOS/DesignerTest
# Generated by qmake (3.0) (Qt 5.3.2)
# Project:  DesignerTest.pro
# Template: app
# Command: /usr/local/Qt-5.3.2/bin/qmake -spec macx-xcode -o DesignerTest.xcodeproj/project.pbxproj DesignerTest.pro
#############################################################################

MAKEFILE      = project.pbxproj

MOC       = /usr/local/Qt-5.3.2/bin/moc
UIC       = /usr/local/Qt-5.3.2/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB
INCPATH       = -I/usr/local/Qt-5.3.2/mkspecs/macx-clang -I. -I. -I/usr/local/Qt-5.3.2/lib/QtWidgets.framework/Versions/5/Headers -I/usr/local/Qt-5.3.2/lib/QtGui.framework/Versions/5/Headers -I/usr/local/Qt-5.3.2/lib/QtCore.framework/Versions/5/Headers -I. -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/OpenGL.framework/Versions/A/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk/System/Library/Frameworks/AGL.framework/Headers -I. -F/usr/local/Qt-5.3.2/lib
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compilers: moc_Summer.cpp ui_DesignerTest.h
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all: moc_Summer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_Summer.cpp
moc_Summer.cpp: /usr/local/Qt-5.3.2/lib/QtCore.framework/Versions/5/Headers/QObject \
		Summer.h
	/usr/local/Qt-5.3.2/bin/moc $(DEFINES) -D__APPLE__ -D__GNUC__=4 -I/usr/local/Qt-5.3.2/mkspecs/macx-clang -I/Users/timothyshull/Programming/QTExamples/DesignerTest -I/Users/timothyshull/Programming/QTExamples/DesignerTest -I/usr/local/Qt-5.3.2/lib/QtWidgets.framework/Headers -I/usr/local/Qt-5.3.2/lib/QtGui.framework/Headers -I/usr/local/Qt-5.3.2/lib/QtCore.framework/Headers -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/usr/include/c++/4.2.1 -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/usr/include/c++/4.2.1/backward -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/6.0/include -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include -I/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk/usr/include -F/usr/local/Qt-5.3.2/lib Summer.h -o moc_Summer.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_DesignerTest.h
compiler_uic_clean:
	-$(DEL_FILE) ui_DesignerTest.h
ui_DesignerTest.h: DesignerTest.ui
	/usr/local/Qt-5.3.2/bin/uic DesignerTest.ui -o ui_DesignerTest.h

compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

