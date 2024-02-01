let project = new Project('Test');

project.cmd = true;

project.addFile('Sources/**');
project.setDebugDir('../Deployment');

resolve(project);