<h1 align="center">
  :robot: MecanumBot :robot:
</h1>

<h3 align="center">Robitics' course group project.</h3>
<p align="center">Dardano Pietro: 10674299</p>
<p align="center">Desiderato Lorenzo: </p>
<p align="center">Ghilotti Filippo: </p>

<h3> Project's Files: </h3>
 <h2>BAGS</h2> -> Contains provided bags.
 <h2>CFG</h2> -> Contains parameters for the dynamic reconfiguration.
 <h2>LAUNCH</h2>
  1. robotics_ddg.launch -> launch all the nodes
  2.  EVENTUALI
 <h2>MSG</h2>
  1. nav-msgs
 <h2>SRC</h2> 
  1. odometry.cpp ->
  2. Tick2RPM ->
 <h2>SRV</h2>
  1. reset_pose -> service that reset odometri to x0 y0 theta0

<h3> To launch it: </h3>

```shell
roslaunch robotics_ddg robotics_ddg.launch
```
