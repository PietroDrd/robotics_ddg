<h1 align="center">
  :robot: MecanumBot :robot:
</h1>

<h3 align="center">Robitics' course group project.</h3>
<p align="center">Dardano Pietro: 10674299</p>
<p align="center">Desiderato Lorenzo: </p>
<p align="center">Ghilotti Filippo: </p>

<h3> Project's Files: </h3>
 <h4>BAGS</h4> -> Contains provided bags.
 <h4>CFG</h4> -> Contains parameters for the dynamic reconfiguration.
 <h4>LAUNCH</h4>
  1. robotics_ddg.launch -> launch all the nodes
  2.  EVENTUALI
 <h4>MSG</h4>
  1. nav-msgs
 <h4>SRC</h4> 
  1. odometry.cpp ->
  2. Tick2RPM ->
 <h4>SRV</h4>
  1. reset_pose -> service that reset odometri to x0 y0 theta0

<h3> To launch it: </h3>

```shell
roslaunch robotics_ddg robotics_ddg.launch
```
