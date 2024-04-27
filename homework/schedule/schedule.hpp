#pragma once
#include <functional>
#include <thread>

template<typename Func, typename Sec, typename... Data>
void schedule(Func func, Sec sec, Data... d) {
    std::this_thread::sleep_for(sec);
    func(std::forward<Data>(d)...);
}
