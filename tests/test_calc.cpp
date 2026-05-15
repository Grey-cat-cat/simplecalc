#include <flow.h>
#include <gtest/gtest.h>

TEST(graphf, oneedge1) {
  Graph gr(2);
  gr.InsertEdge(0, 1, 100);
  int flow = gr.Dinic(0, 1);
  EXPECT_EQ(flow, 100);
}

TEST(graphf, oneedge2) {
  Graph gr(2);
  gr.InsertEdge(0, 1, 100);
  int flow = gr.Dinic(1, 0);
  EXPECT_EQ(flow, 0);
}

TEST(graphf, zeroedge) {
  Graph gr(2);
  int flow = gr.Dinic(0, 1);
  EXPECT_EQ(flow, 0);
}