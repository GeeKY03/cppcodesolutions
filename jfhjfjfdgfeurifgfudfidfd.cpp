func candy(ratings []int) int {
    left := make([]int, len(ratings)) 
    right := make([]int, len(ratings))
    
	// children with a higher rating should get more candy than its left neighbor
    left[0] = 1 // each child must have at least one candy.
    for i:=1; i<len(ratings); i++ {
        left[i] = 1 // each child must have at least one candy.
        if ratings[i] > ratings[i-1] {
            left[i] = left[i-1] + 1
        }
    }
    
	// children with a higher rating should get more candy than its right neighbor
    right[len(ratings)-1] = 1  // each child must have at least one candy.
    for i:=len(ratings)-2; i>=0; i-- {
        right[i] = 1  // each child must have at least one candy.
        if ratings[i] > ratings[i+1] {
            right[i] = right[i+1] + 1
        }
    }
    
    candies := 0
	// children should get maximum of candies calculated from left and right neighbour.
    for i:=0; i<len(left); i++ {
       candies += max(left[i], right[i])
    }
    
    return candies
}

func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}