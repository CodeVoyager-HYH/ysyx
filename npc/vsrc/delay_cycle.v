module delay_cycle (
    input wire  clk,     // 时钟
    input wire  rst_n,   // 低电平复位
    input wire  start,   // 触发信号，开始计数
    input wire  [4:0] times,   // 需要计数的周期数
    output wire  done     // 计数完成信号
);

    reg [4:0]count;
    reg running;
    assign done = (running)?1'b1:1'b0;
                    //(running && count==5'b0)?1'b1:1'b0;

    // always @(posedge clk or negedge rst_n) begin
    //     if (!rst_n) begin
    //         count   <= 0;
    //         running <= 0;
    //         //done    <= 0;
    //     end 
    //     else if (start && !running) begin
    //         count   <= times;    // 设定计数上限
    //         running <= 1;    // 开始计数
    //         //done <= 0;
    //         //count <= count - 1;
    //     end 
    //     if (running) begin
    //         if (count >= 1 && count < 5'b11111)begin
    //             count <= count - 1;
    //             //done <= 1;
    //         end
    //         else begin
    //             //count   <= 5'b11111;
    //             running <= 0;
    //             //done <= 1;
    //         end
    //     end 
    // end

    reg read_pending;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            read_pending <= 1'b0;
        end
        else if (start && !running) begin
            running <= 1;    // 开始计数
        end 
        if(!start&&running) begin
            running <= 1'b0;

        end
    end


endmodule
