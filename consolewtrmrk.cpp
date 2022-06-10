/*
Title: Console Watermark.cpp
Purpose: To overwrite disgusting API watermarks.

Instructions:
Make a Dynamic Link Library in Visual Studio 2019,
Rename it to csoverwritter.dll (console overwritter),
in the DLL_PROCESS_ATTACH function, paste this code below:
*/

SetConsoleTitleA("totally not skidded!");/* whatever text you want */
cout << "this isnt skidded btw!" << endl; /* comes as a output in cs */
cout << "you can add more lines!" << endl; /* comes as a output in cs */
system("PAUSE");
getchar();

// Make sure this is injected at least 0.1 seconds before the API's DLL injects!
// It should work OKAY, and this is just a context you can improve this.
