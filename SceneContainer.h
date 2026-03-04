#pragma once

#include <memory>
#include <vector>

class Light {
public:
  std::string type;
};

class Shape {
public:
  std::string type;
};

class Camera {
public:
  std::string type;
};

class SceneContainer {
  friend class SceneLoader; // this will allow the scene loader to
                            // manipulate the Scene

private:
  std::vector<std::shared_ptr<Light>> lights;
  std::vector<std::shared_ptr<Shape>> shapes;
  std::vector<std::shared_ptr<Camera>> cameras;

public:
  SceneContainer() = default;
};
