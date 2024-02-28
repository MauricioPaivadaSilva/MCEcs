#pragma once

#ifdef _WIN32
    #ifdef BUILD_DLL
        #define DLL_EXPORT __declspec(dllexport)
    #else
        #define DLL_EXPORT __declspec(dllimport)
    #endif
#else
    #define DLL_EXPORT __attribute__((visibility("default")))
#endif

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/VertexArray.hpp>

namespace mc{
  class DLL_EXPORT principal{
    private:
      sf::RenderWindow window;
    public:
      principal(float hz);
      ~principal();
      void exec(const float hz);
      auto GraphFunc();
      auto Vector();
      auto Arrow();
      auto funcSin(const float hz);
      void position(float x_size, float y_size);
  };
}
