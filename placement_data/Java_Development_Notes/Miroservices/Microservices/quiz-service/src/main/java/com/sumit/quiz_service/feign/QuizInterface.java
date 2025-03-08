package com.sumit.quiz_service.feign;

import com.sumit.quiz_service.model.QuestionWrapper;
import com.sumit.quiz_service.model.Response;
import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;


//what is the name of your service
@FeignClient("QUESTION-SERVICE")
public interface QuizInterface {

    //here we declare the methods that we implement in the question-service
    @GetMapping("question/generate")
    public ResponseEntity<List<Integer>> getQuestionsForQuiz(@RequestParam String categoryName, @RequestParam Integer numQuestions);

    //pass body as [1, 2, 3, 4, 5]
    @PostMapping("question/getQuestions")
    public ResponseEntity<List<QuestionWrapper>>getQuestionsFromId(@RequestBody List<Integer> questionIds);


    @PostMapping("question/getScore")
    public ResponseEntity<Integer>getScore(@RequestBody List<Response> responses);

}
