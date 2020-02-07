# wxWidgets Windows Application
<h1>Setting up the solution</h1>
<ul>
<h2>Option 1 (easier)</h2>
  <li>Download or build wxWidgets SDK from their <a href="https://www.wxwidgets.org/">official website</a></li>
  <li>Create an evironment variable called WXDIR and set its path to the build/install folder</li>
  <li>Done!</li>
<h2>Option 2</h2>
  <li>Download or build wxWidgets SDK from their <a href="https://www.wxwidgets.org/">official website</a></li>
  <li>Go to your project Properties -> C/C++ -> General. Edit the option 'Additional Include Directories'. Replace $(WXDIR) with your wxWidgets SDK installation path. This folder is unique for both 32 and 64 bits</li>
  <li>Then, go to Linker -> General. Edit the option 'Additional Library Directories'. Replace $(WXDIR) with your wxWidgets SDK installation path. Do this for x32 and x64 platforms, as they have different library folders</li>
  <li>Done!</li>
</ul>
