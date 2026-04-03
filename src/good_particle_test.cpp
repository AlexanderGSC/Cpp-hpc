
#include <iostream>
#include <thread>
#include <chrono>

struct GoodParticle {
	alignas(64) float vel;
	alignas(64) double pos_x, pos_y, pos_z;
};

constexpr std::size_t N = 1e8;

int main() {
    GoodParticle p1 {10.0f, 0.0, 1.0, 2.5};

    auto start = std::chrono::high_resolution_clock::now();

    auto update_pos1 = std::thread([&](){
        for (int i=0; i<N; ++i)
            p1.pos_x+=1.0, p1.pos_y-=0.5, p1.pos_z+=0.1;
    });

    auto update_vel1 = std::thread([&](){
        for (int i=0; i<N; ++i)
            p1.vel *= 1.03f;
    });

    update_pos1.join();
    update_vel1.join();

    auto finish = std::chrono::high_resolution_clock::now();
    std::cout << std::chrono::duration<double>(finish - start).count();
    return 0;
}
