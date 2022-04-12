<h1  align="center"> :robot: MecanumBot :robot: </h1>

<h3  align="center">Robitics' course group project.</h3>

<p  align="center">Dardano Pietro: 10674299</p>

<p  align="center">Desiderato Lorenzo:  </p>

<p  align="center">Ghilotti Filippo: 10632869 </p>

  

<h3> Project's Files: </h3>

<b>BAGS</b> 

<b>CFG</b> 

1. param.cfg &rarr; Configuration for the dynamic reconfigure server.

<b>LAUNCH</b>

1.  robotics_ddg.launch &rarr; launch all the nodes.

2. EVENTUALI.

<b>MSG</b>

1. nav-msgs &rarr;
2. another &rarr;

<b>SRC</b>

1. odometry.cpp &rarr;.

2. Tick2RPM &rarr; Ask the encoders and converts to RPM.

<b>SRV</b>

1. reset_pose &rarr; service that reset odometri to x0 y0 theta0.

  

<h3> To launch it: </h3>

  

```shell

roslaunch robotics_ddg robotics_ddg.launch

```